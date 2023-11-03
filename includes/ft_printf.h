/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:46:25 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/03 14:19:05 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *s, ...);

int     ft_l_putstr(char *s);
int     ft_l_putchar(int c);
void    ft_l_putnbr(int	nbr, int *total_lenght);
int     ft_l_puthex(unsigned int dec, char c);
int     ft_l_putpointer(size_t ptr);
int     ft_writehex(char *hexbuff, int start);
void    ft_l_put_uint(unsigned int u, int *total_length);

#endif
