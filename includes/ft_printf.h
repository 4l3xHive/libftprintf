/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:46:25 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/01 18:31:20 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *s, ...);

int	ft_l_putstr(char *s);
int	ft_l_putchar(int c);
int	ft_l_putnbr(int	nbr);
int	ft_l_puthex(int dec, char c);

#endif
