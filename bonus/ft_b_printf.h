/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:46:25 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/09 14:03:41 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_B_PRINTF_H
# define FT_B_PRINTF_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

extern int	g_flags;

enum	e_flags
{
	FLAG_MINUS = 1,
	FLAG_ZERO = 2,
	FLAG_DOT = 4
};

int		ft_printf(const char *s, ...);
int		ft_b_putstr(char *s, int width, int precision);
int		ft_b_putchar(int c, int width);
int		ft_b_putnbr(int nbr, int precision, int width);
int		ft_b_puthex(unsigned int dec, char c);
int		ft_b_putpointer(size_t ptr);
int		ft_b_writehex(char *hexbuff, int start);
void	ft_b_put_uint(unsigned int u, int *total_length);

#endif
