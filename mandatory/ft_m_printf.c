/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:40:06 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/04 17:26:45 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_m_printf.h"

static void	check_formatter(const char *s, int *total_length, va_list *argptr)
{
	if (*s == 'd' || *s == 'i')
		ft_m_putnbr(va_arg(*argptr, int), &total_length);
	else if (*s == 's')
		*total_length += ft_m_putstr(va_arg(*argptr, char *));
	else if (*s == 'c')
		*total_length += ft_m_putchar(va_arg(*argptr, int));
	else if (*s == 'x' || *s == 'X')
		*total_length += ft_m_puthex(va_arg(*argptr, unsigned int), *s);
	else if (*s == '%')
		*total_length += ft_m_putchar('%');
	else if (*s == 'p')
		*total_length += ft_m_putpointer(va_arg(*argptr, size_t));
	else if (*s == 'u')
		ft_m_put_uint(va_arg(*argptr, unsigned int), &total_length);
}

int	ft_printf(const char *s, ...)
{
	va_list		argptr;
	int			total_length;

	va_start(argptr, s);
	total_length = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			check_formatter(s, &total_length, &argptr);
			s++;
		}
		else
			total_length += ft_m_putchar(*s++);
	}
	va_end(argptr);
	return (total_length);
}
