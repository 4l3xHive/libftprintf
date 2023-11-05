/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:58:13 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/05 11:58:16 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

static void handle_flags_and_width(const char **s, int *flags, int *width) {
    // Check for flags
    while (**s == '-' || **s == '0' || **s == '.') {
        if (**s == '-')
            *flags |= FLAG_MINUS;
        else if (**s == '0')
        	*flags |= FLAG_ZERO;
        else if (**s == '.')
        	*flags |= FLAG_DOT;
        (*s)++;
    }
    
	while (ft_isdigit(**s))
	{
		*width = (*width * 10) + (**s - '0');
		(*s)++;
	}
}


int ft_printf(const char *s, ...)
{
	va_list argptr;
	int		total_length;
	int flags;
    int width;

	width = 0;
	flags = 0;
	va_start(argptr, s);
	total_length = 0;

	while (*s)
	{	
		if (*s == '%')
		{
			s++;
			handle_flags_and_width(&s, &flags, &width);
			if (*s == 'd' || *s == 'i')	
				ft_b_putnbr(va_arg(argptr, int), &total_length);
			else if (*s == 's')
				total_length += ft_b_putstr(va_arg(argptr, char *));
			else if (*s == 'c')
				total_length += ft_b_putchar(va_arg(argptr, int), flags, width);
			else if (*s == 'x' || *s == 'X')
				total_length += ft_b_puthex(va_arg(argptr, unsigned int), *s);
			else if (*s == '%')
				total_length += ft_b_putchar('%', 0, 0);
			else if (*s == 'p')
				total_length += ft_b_putpointer(va_arg(argptr, size_t));
			else if (*s == 'u')
				ft_b_put_uint(va_arg(argptr, unsigned int), &total_length);
			s++;
			flags = 0;
			width = 0;
		}
		else
			total_length += ft_b_putchar(*s++, 0, 0);
	}
	
	va_end(argptr);
	return (total_length);
}