/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:46 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/03 16:19:10 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"


/*static int ft_putsMinus(char *s, int width, int precision, int flags) {
    int total_len;
    int orgwidth;

	total_len = 0;
	orgwidth = width;
    if (s == NULL)
		s = "(null)";
    if (FLAG_DOT & flags)
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

static int	ft_putsNormal(char *s, int width, int precision, int flags)
{    
	int total_len;
    int orgwidth;

	orgwidth = width;
	total_len = 0;
    if (s == NULL)
        s = "(null)";
    while (width-- > 0)
        total_len += write(1, " ", 1);
    if (FLAG_DOT & flags)
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
*/


void	ft_b_putnbr(int nbr, int *total_lenght, int precision)
{
	char	c;
    //checkFlags(nbr, precision);
    (void)precision;
    if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*total_lenght += 11;
        return;
	}
    if (nbr < 0)
    {
        write(1, "-", 1);
        ft_b_putnbr(-nbr, total_lenght, 0);
        *total_lenght += 1;
    }
    else if (nbr > 9)
    {
        ft_b_putnbr(nbr / 10, total_lenght, 0);
        ft_b_putnbr(nbr % 10, total_lenght, 0);
    }
    else
    {
        c = nbr + '0';
		write(1, &c, 1);
        *total_lenght += 1;
    }
}