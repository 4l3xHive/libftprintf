/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_put_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:47:37 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/03 18:05:13 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_l_put_uint(unsigned int u, int *total_length)
{
	if (u >= 10)
		ft_l_put_uint(u / 10, total_length);
	*total_length += ft_l_putchar(u % 10 + '0');

}

