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

void	ft_l_putnbr(int nbr, int *total_lenght)
{
	char	c;

    if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*total_lenght += 11;
        return;
	}
    if (nbr < 0)
    {
        write(1, "-", 1);
        ft_l_putnbr(-nbr, total_lenght);
        *total_lenght += 1;
    }
    else if (nbr > 9)
    {
        ft_l_putnbr(nbr / 10, total_lenght);
        ft_l_putnbr(nbr % 10, total_lenght);
    }
    else
    {
        c = nbr + '0';
		write(1, &c, 1);
        *total_lenght += 1;
    }
}
