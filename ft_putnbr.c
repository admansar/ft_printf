/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:21:33 by admansar          #+#    #+#             */
/*   Updated: 2022/10/26 19:08:55 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_putnbr(int nb)
{
	char a;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write (1, "8", 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		nb = (-1) * nb;
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else
	{
		a = '0' + (nb % 10);
		ft_putchar(a);
	}
}
