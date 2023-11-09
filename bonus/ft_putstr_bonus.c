/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:11:41 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/09 13:49:41 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"

static int	ft_putsminus(char *s, int width, int precision, int orgwidth)
{
	int	total_len;

	total_len = 0;
	orgwidth = width;
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

static int	ft_putsnormal(char *s, int width, int precision)
{
	int	total_len;
	int	orgwidth;

	orgwidth = width;
	total_len = 0;
	while (width-- > (int)ft_strlen(s))
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
	int	orgwidth;

	orgwidth = 0;
	if (s == NULL)
		s = "(null)";
	if (g_flags & FLAG_MINUS)
		return (ft_putsminus(s, width, precision, orgwidth));
	return (ft_putsnormal(s, width, precision));
}
