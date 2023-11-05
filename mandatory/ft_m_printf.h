/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:46:25 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/03 15:58:24 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_M_PRINTF_H
#define FT_M_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int     ft_printf(const char *s, ...);
int     ft_m_putstr(char *s);
int     ft_m_putchar(int c);
void    ft_m_putnbr(int	nbr, int *total_lenght);
int     ft_m_puthex(unsigned int dec, char c);
int     ft_m_putpointer(size_t ptr);
int     ft_m_writehex(char *hexbuff, int start);
void    ft_m_put_uint(unsigned int u, int *total_length);

#endif
