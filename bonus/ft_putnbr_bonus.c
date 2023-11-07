/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_l_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:46:46 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/07 16:29:59 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_b_printf.h"
#include <stdio.h>

/*static int	nbrLen(int nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static int handleMinus(int precision, int width, int nbr)
{
    int     len;
    char    *answ;

    answ = ft_itoa(nbr);
    len = 0;
   if (FLAG_DOT & g_flags)
    {
        while (precision-- && nbr)
	    {
            total_len += ;
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

static int	handleNormal(int precision, int width, int nbr)
{   
    answ = ft_itoa(nbr);
    if (!answ)
        return (NULL);
    write(1, answ, )
}
*/

int ft_b_putnbr(int nbr, int *total_lenght, int precision, int width)
{
	//char	c;
    char    *answ;
    (void)precision;
    (void)width;
    if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		*total_lenght += 11;
        return 0;
	}
	/*(void)precision;
	(void)width;
    printf("numlen --> %d\n\n", nbrLen(nbr));
     printf("numlen --> %d\n\n", nbrLen(nbr));
      printf("numlen --> %d\n\n", nbrLen(nbr));*/
  /*  if (g_flags & FLAG_MINUS)
		return (handleMinus(precision, width, nbr));
	else
    {*/
          answ = ft_itoa(nbr);
    if (!answ)
        return (-1);
     write(1, answ, ft_strlen(answ));
    
    return 0;
		//return (handleZeroNormal(precision, width,  nbr));
	

}
