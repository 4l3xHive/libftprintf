/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:58:13 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/07 15:45:43 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>
int		g_flags;

/* Handles "-." flags for %c & %s Others almost */
static int	check_width(const char ***s, long **width, int prec_flag)
{
	while (ft_isdigit(***s))
	{
		**width = (**width * 10) + (***s - '0');
		(**s)++;
		if (**width > INT_MAX && !prec_flag)
			return (-1);
		if (**width > INT_MAX && prec_flag)
		{
			**width = 0;
			return (0);
		}
	}
	return (0);
}
static int	check_flags_and_width(const char **s, long *width, long *precision)
{
	while (**s == '-' || **s == '0' || **s == '.')
	{
		if (**s == '-')
		{
			g_flags |= FLAG_MINUS;
			(*s)++;
			if (**s == '0')
				(*s)++;
			if (ft_isdigit(**s))
				if (check_width(&s, &width, 0) == -1)
					return (-1);
			if (**s == '.')
			{
				g_flags |= FLAG_DOT;
				(*s)++;
				if (check_width(&s, &precision, 1) == -1)
					return (-1);
			}
		}
		else if (**s == '0')
		{
			(*s)++;
			if (**s == '-')
			{
				g_flags |= FLAG_MINUS;
				(*s)++;
			}
			else
				g_flags |= FLAG_ZERO;
			if (ft_isdigit(**s))
			{
				if (check_width(&s, &width, 0) == -1)
					return (-1);
			}
			if (**s == '.')
			{
				g_flags |= FLAG_DOT;
				(*s)++;
				if (check_width(&s, &precision, 1) == -1)
					return (-1);
			}
		}
		else if (**s == '.')
		{
			g_flags |= FLAG_DOT;
			(*s)++;
			if (check_width(&s, &precision, 1) == -1)
				return (-1);
		}
	}
	if (ft_isdigit(**s))
	{
		if (check_width(&s, &width, 0) == -1)
			return (-1);	
	}
	if (**s == '.')
	{
		(*s)++;
		g_flags |= FLAG_DOT;
		if (check_width(&s, &precision, 1) == -1)
			return (-1);
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list		argptr;
	int			total_length;
	long		width;
	long		precision;

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
			if (check_flags_and_width(&s, &width, &precision) == -1)
				return (-1);
			if (*s == 'd' || *s == 'i')	
				total_length += ft_b_putnbr(va_arg(argptr, int), precision, (int)width);
			else if (*s == 's')
				total_length += ft_b_putstr(va_arg(argptr, char *), width, (int)precision);
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
