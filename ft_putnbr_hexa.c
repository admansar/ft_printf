/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:10:16 by admansar          #+#    #+#             */
/*   Updated: 2022/10/27 17:54:52 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "printf.h"

void	ft_putnbr_hexa(int nb, int oneorzero)
{
	char a[] = "0123456789abcdef";
	if (oneorzero == 1)
		upup(a);
	if (nb < 16)
		ft_putchar(a[nb]);
	else 
	{
		ft_putnbr_hexa(nb / 16, oneorzero);
		ft_putnbr_hexa(nb % 16, oneorzero);
	}
}
