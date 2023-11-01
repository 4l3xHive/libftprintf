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
	va_list argptr;
	int		total_lenght;

	va_start(argptr, s);
	total_lenght = 0;	
	while (*s)
	{	
		if (*s == '%')
		{
			s++;
			if (*s == 'd' || *s == 'i')	
				ft_l_putnbr(va_arg(argptr, int), &total_lenght);
			else if (*s == 's')
				total_lenght += ft_l_putstr(va_arg(argptr, char *));
			else if (*s == 'c')
				total_lenght += ft_l_putchar(va_arg(argptr, int));
			else if (*s == 'x' || *s == 'X')
				total_lenght += ft_l_puthex(va_arg(argptr, int ), *s);
			else if (*s == '%')
				total_lenght += ft_l_putchar(*s--);
			else if (*s == 'p')
				total_lenght += ft_l_putpointer(va_arg(argptr, size_t));
			s++;
		}
		else
			total_lenght += ft_l_putchar(*s++);
		//printf("totalhere -->%d", total_lenght);
	}
	va_end(argptr);
	return (total_lenght - 1);
}
