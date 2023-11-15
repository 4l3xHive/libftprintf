/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apyykone <apyykone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:15:52 by apyykone          #+#    #+#             */
/*   Updated: 2023/11/09 12:23:34 by apyykone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_M_PRINTF_H
# define FT_M_PRINTF_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_m_putstr(char *s);
int		ft_m_putchar(int c);
void    ft_m_putnbr(int nbr, int **total_lenght);
int		ft_m_puthex(unsigned int dec, char c);
int		ft_m_putpointer(size_t ptr);
int		ft_m_writehex(char *hexbuff, int start);
void	ft_m_put_uint(unsigned int u, int **total_length);
#endif
