/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:40:06 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/01 18:31:14 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int ft_printf(const char *s, ...)
{
	va_list ptr;
	int		total_lenght;

	va_start(ptr, s);
	total_lenght = 0;	
	while (*s)
	{	
		if (*s == '%')
		{
			s++;
			if (*s == 'd')	
				ft_l_putnbr(va_arg(ptr, int));
			else if (*s == 's')
				total_lenght += ft_l_putstr(va_arg(ptr, char *));
			else if (*s == 'c')
				total_lenght += ft_l_putchar(va_arg(ptr, int));
			else if (*s == '%')
				total_lenght += ft_l_putchar('%');
			else if (*s == 'x'){
				total_lenght += ft_l_puthex(va_arg(ptr, int ), 'x');
			}
			else if (*s == 'X')
				total_lenght += ft_l_puthex(va_arg(ptr, int), 'X');
			s++;
		}
		else
			total_lenght += ft_l_putchar(*s++);
	}
	va_end(ptr);
	return (total_lenght);
}
