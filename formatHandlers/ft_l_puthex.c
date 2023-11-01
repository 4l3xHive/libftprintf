/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_puthex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:59:29 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/01 18:41:24 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_l_puthex(int	dec, char c)
{
	char	hexbuff[100];
	int		temp;
	int		i;

	(void)c;
	i = 0;
	while (dec != 0)
	{ 
        temp = dec % 16; 
        if (temp < 10) 
            temp = temp + '0'; 
        else
            temp = temp + 55; 
        hexbuff[i++] = temp; 
        dec /= 16; 
    }
	hexbuff[i] = '\0';
	return (put(hexbuff, i - 1));
 for (j = i - 1; j > 0; j--) 
        printf("%c", hexa_Number[j]); }
