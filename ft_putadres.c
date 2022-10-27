/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadres.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:58:45 by admansar          #+#    #+#             */
/*   Updated: 2022/10/27 23:59:51 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadres(unsigned long s, int *i)
{
	char	*a;

	a = "0123456789abcdef";
	ft_putstr("0x", i);
	if (s < 16)
		ft_putchar(a[s], i);
	else
	{
		ft_putnbr_hexa(s / 16, i);
		ft_putnbr_hexa(s % 16, i);
	}
}
