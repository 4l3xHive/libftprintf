/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:46:25 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/05 19:58:03 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_B_PRINTF_H
# define FT_B_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

enum e_flags
{
    FLAG_MINUS = 1,
    FLAG_ZERO = 2,
    FLAG_DOT = 4
};

int     ft_printf(const char *s, ...);
int     ft_b_putstr(char *s, int flags, int width, int precision);
int	    ft_b_putchar(int c, int flags, int width);
void    ft_b_putnbr(int	nbr, int *total_lenght);
int     ft_b_puthex(unsigned int dec, char c);
int     ft_b_putpointer(size_t ptr);
int     ft_b_writehex(char *hexbuff, int start);
void    ft_b_put_uint(unsigned int u, int *total_length);

#endif
