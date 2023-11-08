/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:46 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/07 16:29:59 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>

int handleNegPad(int width, int len, char *answ)
{
    int total_len;

    total_len = 0;
    while (width-- > 0)
        total_len += ft_b_putchar(' ', 0);
    if (answ[0] == '-')
    {
        while (len > 1 && answ[0] == '-')
        {
            len--;
            total_len += ft_b_putchar(' ', 0);
        }
    }
    return (total_len);
}



static int handleMinus(int precision, int width, char *answ)
{
    int     len;
    int     i;
    int     total_len;

    total_len = 0;
    i = 0;
    len = ft_strlen(answ);
    if (answ[i] == '-')
    {
        ft_b_putchar('-', 0);
        i++;
        len--;
        width--;
        total_len++;
    }
    if (FLAG_DOT & g_flags)
    {
        if (precision)
        {
            width -= precision;
            if (precision > len)
            {
                precision -= len;
                while (precision--)
                    total_len += ft_b_putchar('0', 0);
                ft_putstr_fd(&answ[i], 1);
                total_len += ft_strlen(&answ[i]);
            }
            else
            {
                while ((precision-- || width--) && answ[i])
                    total_len += ft_b_putchar(answ[i++], 0);
            }
        }
        else
        {
            ft_putstr_fd(&answ[i], 1);
            total_len += ft_strlen(&answ[i]);
        }
        while (--width > 0)
            total_len += ft_b_putchar(' ', 0);
    }
    else
    {
        ft_putstr_fd(&answ[i], 1);
        total_len += ft_strlen(&answ[i]);
        width -= total_len;
        total_len += handleNegPad(width, len, answ);
        while (width-- > 0)
            total_len += ft_b_putchar(' ', 0);
        if (answ[0] == '-')
        {
            while (len > 1 && answ[0] == '-')
            {
                len--;
                total_len += ft_b_putchar(' ', 0);
            }
        }
    }
    free(answ);
    return (total_len);
}

static int	handleNormal(int precision, int width, char *answ)
{   
    int     i;
    int     len;
    int     total_len;
    char    pad;
    int     minus;

    total_len = 0;
    len = ft_strlen(answ);
    i = 0;
    minus = 0;
    if (answ[i] == '-')
    {
        minus = 1;
        len--;
        i++;
    }
    if (FLAG_DOT & g_flags)
    {   
       while (width > precision)
        {
            total_len += ft_b_putchar(' ', 0);
            width--;
        }
        if (minus)
            total_len += ft_b_putchar('-', 0);
        if (precision > len)
        {
            precision -= len;
            while (precision--)
                total_len += ft_b_putchar('0', 0);
             ft_putstr_fd(&answ[i], 1);
            total_len += ft_strlen(&answ[i]);
        }
        else
        {
            while (precision-- && answ[i])
                total_len += ft_b_putchar(answ[i++], 0);
        }
    }
    else
    {
        if (FLAG_ZERO & g_flags)
            pad = '0';
        else
            pad = ' ';
        if (minus && pad == '0')
            total_len += ft_b_putchar('-', 0);
        if (minus)
            width -= len + 1;
        else
            width -= len;
        while (width > 0)
        {
            total_len += ft_b_putchar(pad, 0);
            width--;
        }
        if (minus && pad == ' ')
            total_len += ft_b_putchar('-', 0);
        ft_putstr_fd(&answ[i], 1);
        total_len += ft_strlen(answ);
    } 
    free(answ);           
    return (total_len);
}


int ft_b_putnbr(int nbr, int precision, int width)
{
    char    *answ;

    answ = ft_itoa(nbr);
    if (!answ)
        return (-1);
    if (g_flags & FLAG_MINUS)
		return (handleMinus(precision, width, answ));
    return (handleNormal(precision, width,  answ));   
}
