/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:46 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/01 17:39:04 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_l_putnbr(int nbr)
{
	char	c;
	int		size;

	size = 0;
    if (nbr < 0)
    {
        write(1, "-", 1);
        ft_l_putnbr(-nbr);
		size++;
    }
    else if (nbr > 9)
    {
		size++;
        ft_l_putnbr(nbr / 10);
        ft_l_putnbr(nbr % 10);
    }
    else
    {
        c = nbr + '0';
		write(1, &c, 1);
    }
	return (size);
}
