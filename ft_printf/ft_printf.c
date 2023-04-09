/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:58:47 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/16 08:13:10 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list args, char *str, int i)
{
	if (str[i] == '%' && str[i + 1] == 'c')
		i = print_char(va_arg(args, unsigned int), i);
	else if (str[i] == '%' && str[i + 1] == '%')
		i = printpercent(i);
	else if (str[i] == '%' && str[i + 1] == 's')
		i = print_str(va_arg(args, char *), i);
	else if (str[i] == '%' && (str[i + 1] == 'i' || str[i + 1] == 'd'))
		i = ft_putnbr(va_arg(args, int), i);
	else if (str[i] == '%' && str[i + 1] == 'u')
		i = ft_put_unsigned_int(va_arg(args, unsigned int), i);
	else if (str[i] == '%' && str[i + 1] == 'p')
		i = ft_itoa_pointer(va_arg(args, unsigned long), i);
	else if (str[i] == '%' && str[i + 1] == 'x')
		i = ft_itoa_lower_hex(va_arg(args, unsigned int), i);
	else if (str[i] == '%' && str[i + 1] == 'X')
		i = ft_itoa_upper_hex(va_arg(args, unsigned int), i);
	else if (str[i] == '%' && str[i + 1] == '\0')
		i++;
	else
	{
		counting_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	va_start (args, str);
	while (str[i])
	{
		i = check_format(args, (char *)str, i);
	}
	va_end (args);
	j = counter(0);
	counter(-j);
	return (j);
}
