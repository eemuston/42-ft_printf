/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:51:22 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/14 12:16:43 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
void	counting_putchar(char c);
int		counter(int i);
int		print_char(char c, int i);
int		print_str(char *str, int i);
int		printpercent(int i);
int		ft_putnbr(int nb, int i);
int		ft_put_unsigned_int(unsigned int nb, int i);
void	print_str_no_i(char *str);
int		ft_itoa_pointer(unsigned long n, int i);
int		ft_itoa_lower_hex(unsigned int n, int i);
int		ft_itoa_upper_hex(unsigned int n, int i);

#endif