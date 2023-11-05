/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:11:41 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/05 20:19:01 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"

/* IF THE WIDTH IS BIGGER THAN THE BUFFER RETURNS WITH ELSE THE LEN OF THE BUFFER. */
static int	ft_putsMinus(char *s, int width, int precision)
{
	int		total_len;
	int		orgwidth;

	if (s == NULL)
		s = "(null)";
	orgwidth = width;
	total_len = 0;
	if (precision)
	{
		while (precision-- && *s)
			total_len += write(1, s++, 1);
	}
	else
	{
		while (*s)
			total_len += write(1, s++, 1);
	}
	while (width--)
		ft_b_putchar(' ', 0, 0);
	if (total_len > orgwidth)
		return (total_len);
	return (orgwidth);
}

static int	ft_putsNormal(char *s, int width, int precision)
{
	int		total_len;
	int		orgwidth;

	if (s == NULL)
		s = "(null)";
	orgwidth = width;
	total_len = 0;
	while (width--)
		ft_b_putchar(' ', 0, 0);
		if (precision)
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

int	ft_b_putstr(char *s, int flags, int width, int precision)
{
	if (flags & FLAG_MINUS)
		return (ft_putsMinus(s, width, precision));
	
	return (ft_putsNormal(s, width, precision));
	
/*	size = 0;
	while (*s)
	{
		write(1, s++, 1);
		size++;
	}
	return (size);*/
}
