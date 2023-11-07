/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:11:41 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/07 16:10:12 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>
/* IF THE WIDTH IS BIGGER THAN THE BUFFER RETURNS WITH ELSE THE LEN OF THE BUFFER. */
static int ft_putsMinus(char *s, int width, int precision) {
    int total_len;
    int orgwidth;

	total_len = 0;
	orgwidth = width;
    if (s == NULL)
		s = "(null)";
    if (FLAG_DOT & g_flags)
    {
        while (precision-- && *s)
	    {
            total_len += write(1, s++, 1);
            width--;
        }
    }
    else
	{
        while (*s)
		{
            total_len += write(1, s++, 1);
            width--;
        }
    }
    while (width-- > 0)
        total_len += write(1, " ", 1);
    if (total_len > orgwidth)
        return (total_len);
    return (orgwidth);
}
static int  ft_len(char *s)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    return (len);
}
static int	ft_putsNormal(char *s, int width, int precision)
{    
	int total_len;
    int orgwidth;

	orgwidth = width;
	total_len = 0;
    if (s == NULL)
        s = "(null)";
    while (width-- > ft_len(s))
        total_len += write(1, " ", 1);
    if (FLAG_DOT & g_flags)
	{
        while (precision-- && *s)
            total_len += write(1, s++, 1);
    }
    else
    {
        while (*s) 
            total_len += write(1, s++, 1);
    }
    if (total_len > orgwidth)
        return (total_len);
    return (orgwidth);
}

int	ft_b_putstr(char *s, int width, int precision)
{
	if (g_flags & FLAG_MINUS)
		return (ft_putsMinus(s, width, precision));
	return (ft_putsNormal(s, width, precision));
}
