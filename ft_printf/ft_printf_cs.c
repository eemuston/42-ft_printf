/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:50:05 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/14 12:10:27 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c, int i)
{
	counting_putchar(c);
	i = i + 2;
	return (i);
}

int	print_str(char *str, int i)
{
	if (str == NULL)
	{
		print_str_no_i("(null)");
	}
	else
	{
		while (*str)
		{
			counting_putchar(*str);
			str++;
		}
	}
	i = i + 2;
	return (i);
}

void	print_str_no_i(char *str)
{
	while (*str)
	{
		counting_putchar(*str);
		str++;
	}
}

int	printpercent(int i)
{
	counting_putchar('%');
	i = i + 2;
	return (i);
}
