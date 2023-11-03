/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:40:06 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/03 16:19:23 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_printf(const char *s, ...)
{
	va_list argptr;
	int		total_length;

	va_start(argptr, s);
	total_length = 0;	
	while (*s)
	{	
		if (*s == '%')
		{
			s++;
			if (*s == 'd' || *s == 'i')	
				ft_l_putnbr(va_arg(argptr, int), &total_length);
			else if (*s == 's')
				total_length += ft_l_putstr(va_arg(argptr, char *));
			else if (*s == 'c')
				total_length += ft_l_putchar(va_arg(argptr, int));
			else if (*s == 'x' || *s == 'X')
				total_length += ft_l_puthex(va_arg(argptr, unsigned int), *s);
			else if (*s == '%')
				total_length += ft_l_putchar('%');
			else if (*s == 'p')
				total_length += ft_l_putpointer(va_arg(argptr, size_t));
			else if (*s == 'u')
				ft_l_put_uint(va_arg(argptr, unsigned int), &total_length);
			s++;
		}
		else
			total_length += ft_l_putchar(*s++);
		//printf("totalhere -->%d", total_lenght);
	}
	va_end(argptr);
	return (total_length);
}
