/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:18:32 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/04 17:43:05 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_m_printf.h"

int     ft_m_putpointer(size_t ptr)
{
	char	string[100];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;

	if (ptr == 0)
	{
		#ifdef __linux__
			return (ft_m_putstr("(nil)"));
		#endif
		ft_m_putchar('0');
	}

	while (ptr != 0)
	{
		string[i] = base_character[ptr % 16];
		ptr /= 16;
		i++;
	}
	string[i++] = 'x';
	string[i] = '0';
    return (ft_m_writehex(string, i));
}