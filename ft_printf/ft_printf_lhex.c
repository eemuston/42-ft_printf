/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:01:49 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/14 12:15:47 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nbr_counter(unsigned int n)
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

static	char	*if_positive(char *s, unsigned int nb, int len)
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

int	ft_itoa_lower_hex(unsigned int n, int i)
{
	char	*s;
	int		len;
	long	nb;

	nb = n;
	len = nbr_counter(nb);
	s = (char *)malloc(sizeof(char) * (len) + 1);
	if (!(s))
		return (0);
	s[len--] = '\0';
	if (nb == 0)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	if (nb > 0)
		if_positive(s, nb, len);
	print_str_no_i(s);
	free(s);
	i = i + 2;
	return (i);
}
