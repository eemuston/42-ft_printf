/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:22:42 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/14 12:15:32 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb, int i)
{
	if (nb == -2147483648)
	{
		ft_putnbr(214748364 * -1, i);
		ft_putnbr(+8, i);
	}
	else if (nb < 0)
	{
		counting_putchar('-');
		ft_putnbr(nb * -1, i);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, i);
		ft_putnbr(nb % 10, i);
	}
	else
	{
		counting_putchar('0' + nb);
	}
	i = i + 2;
	return (i);
}

int	ft_put_unsigned_int(unsigned int nb, int i)
{
	if (nb > 9)
	{
		ft_put_unsigned_int(nb / 10, i);
		ft_put_unsigned_int(nb % 10, i);
	}
	else
	{
		counting_putchar('0' + nb);
	}
	i = i + 2;
	return (i);
}
