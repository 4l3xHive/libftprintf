/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:46 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/09 12:21:26 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_m_putnbr(int nbr, int **total_length)
{
    char c;

    c = '-';
    if (nbr == -2147483648)
    {
        if (write(1, "-2147483648", 11) < 0)
        {
            **total_length = -1;
            return;
        }
        **total_length += 11;
        return;
    }

    if (nbr < 0)
    {
        if (write(1, &c, 1) < 0)
        {
            **total_length = -1;
            return;
        }
        nbr = -nbr; // Make nbr positive for further processing
        **total_length += 1;
    }

    if (nbr > 9)
    {
        ft_m_putnbr(nbr / 10, total_length);
        ft_m_putnbr(nbr % 10, total_length);
    }
    else
    {
        c = nbr + '0';
        if (write(1, &c, 1) < 0)
        {
            **total_length = -1;
            return;
        }
        **total_length += 1;
    }
}
