/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:58:13 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/06 01:27:29 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>
int		g_flags;

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static void	checkWidth(const char ***s, int **width)
{
	while (ft_isdigit(***s))
	{
		**width = (**width * 10) + (***s - '0');
		(**s)++;
	}

}
static void check_flags_and_width(const char **s, int *width, int *precision)
{
	while (**s == '-' || **s == '0' || **s == '.')
	{
        if (**s == '-')
        {
			g_flags |= FLAG_MINUS;
			(*s)++;
			if (ft_isdigit(**s))
				checkWidth(&s, &width);
			if (**s == '.')
			{
				g_flags |= FLAG_DOT;
				(*s)++;
				checkWidth(&s, &precision);
			}
		}
		else if (**s == '0')
			g_flags |= FLAG_ZERO;
        else if (**s == '.')
		{
        	g_flags |= FLAG_DOT;
			(*s)++;
			checkWidth(&s, &precision);
		}
    }
	checkWidth(&s, &width);
}


int ft_printf(const char *s, ...)
{
	va_list argptr;
	int		total_length;
    int		width;
	int		precision;

	precision = 0;
	width = 0;
	g_flags = 0;
	va_start(argptr, s);
	total_length = 0;

	while (*s)
	{	
		if (*s == '%')
		{
			s++;
			check_flags_and_width(&s, &width, &precision);
		//	printf("width --> %d, precision --> %d\n", width, precision);
			if (*s == 'd' || *s == 'i')	
				ft_b_putnbr(va_arg(argptr, int), &total_length, precision);
			else if (*s == 's')
				total_length += ft_b_putstr(va_arg(argptr, char *), width, precision);
			else if (*s == 'c')
				total_length += ft_b_putchar(va_arg(argptr, int), width);
			else if (*s == 'x' || *s == 'X')
				total_length += ft_b_puthex(va_arg(argptr, unsigned int), *s);
			else if (*s == '%')
				total_length += ft_b_putchar('%', 0);
			else if (*s == 'p')
				total_length += ft_b_putpointer(va_arg(argptr, size_t));
			else if (*s == 'u')
				ft_b_put_uint(va_arg(argptr, unsigned int), &total_length);
			
			//printf("len --> %d\n", total_length);
			s++;
			g_flags = 0;
			width = 0;
		    precision = 0;
		}
		else
			total_length += ft_b_putchar(*s++, 0);
	}
	
	va_end(argptr);
	return (total_length);
}
