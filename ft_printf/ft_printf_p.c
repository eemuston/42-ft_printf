/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:02:56 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/14 12:14:44 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_counter(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static	char	*if_positive(char *s, unsigned long nb, int len)
{
	while (nb > 0)
	{
		if ((nb % 16) <= 9 && (nb % 16) >= 0)
			s[len] = (nb % 16) + '0';
		else
		{
			s[len] = (nb % 16) + 87;
		}
		nb /= 16;
		len--;
	}
	return (s);
}

int	ft_itoa_pointer(unsigned long n, int i)
{
	char			*s;
	unsigned long	len;
	unsigned long	nb;

	nb = n;
	len = nbr_counter(nb);
	s = (char *)malloc(sizeof(char) * (len) + 1);
	if (!(s))
		return (0);
	s[len--] = '\0';
	if (nb == 0)
	{
		s[0] = '0';
	}
	if (nb > 0)
		if_positive(s, nb, len);
	print_str_no_i("0x");
	print_str_no_i(s);
	free(s);
	i = i + 2;
	return (i);
}
