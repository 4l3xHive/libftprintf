/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:11:41 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/03 12:03:43 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_l_putstr(char *s)
{
	int		size;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	size = 0;
	while (*s)
	{
		write(1, s++, 1);
		size++;
	}
	return (size);
}