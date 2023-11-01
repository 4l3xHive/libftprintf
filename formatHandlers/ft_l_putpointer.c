/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:18:32 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/01 23:18:48 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_l_putpointer(size_t ptr)
{
	char	string[25];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	if (ptr == 0)
		return (ft_l_putchar('0'));
	while (ptr != 0)
	{
		string[i] = base_character[ptr % 16];
		ptr /= 16;
		i++;
	}
    return (ft_writehex(string, i) + 2);
}