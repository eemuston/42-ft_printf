/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:15:39 by eemuston          #+#    #+#             */
/*   Updated: 2022/12/13 14:39:28 by eemuston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	counter(int i)
{
	static int	k;

	k += i;
	return (k);
}

void	counting_putchar(char c)
{	
	write (1, &c, 1);
	counter(1);
}
