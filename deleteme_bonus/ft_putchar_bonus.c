/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:44:15 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/09 13:58:32 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>

int	ft_b_putchar(int c, int width)
{
	int		space;
	int		total_len;

	space = ' ';
	total_len = 0;
	if (g_flags & FLAG_MINUS)
	{
		total_len += write(1, &c, 1);
		while (--width > 0)
		{
			total_len += write(1, &space, 1);
		}
	}
	else
	{
		while (--width > 0)
		{
			total_len += write(1, &space, 1);
		}
		total_len += write(1, &c, 1);
	}
	return (total_len);
}
