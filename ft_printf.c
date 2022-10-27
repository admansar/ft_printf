/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:30:13 by admansar          #+#    #+#             */
/*   Updated: 2022/10/27 18:50:46 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int ft_printf(const char *fprint, ...)
// {
//     va_list l;

//     int i = 0;
// 	int j;
// 	int count  = 0;
// 	unsigned int alpha;
//     char c;
// 	char *ptr;
// 	unsigned long nop;
//     va_start (l, fprint);
//     while (fprint[i])
//     {
//         if(fprint[i] == '%')
//         {
//             i++;

//             if (fprint[i] == 'c')
//             {
// 				c = va_arg (l,int);
//                 ft_putchar(c, &count);
//             }
// 			else if (fprint[i] == 's')
// 			{
// 				ptr = va_arg(l, char *);
// 					ft_putstr(ptr, &count);
// 				}
// 			else if (fprint[i] == 'd' || fprint[i] == 'i')
// 			{
// 				j = va_arg(l, int);
// 				ft_putnbr(j, &count);
// 			}
// 			else if (fprint[i] == 'u')
// 			{
// 				alpha = va_arg(l, unsigned int);
// 				ft_putnbr_ui(alpha, &count);
// 			}
// 			else if (fprint[i] == 'x')
// 			{
// 				j = va_arg(l, int);
// 				ft_putnbr_hexa(j,0, &count);
// 			}
// 			else if (fprint[i] == 'X')
// 			{
// 				j = va_arg(l, int);
// 				ft_putnbr_hexa(j,1, &count);
// 			}
// 			else if (fprint[i] == 'p')
// 			{
// 				nop = va_arg(l, unsigned long);
// 				ft_putadres(nop , &count);
// 			}
//         }
// 		else
// 		{
//         write (1, &fprint[i], 1);
//         i++;
// 		count++;
// 		}
//     }
//     va_end(l);
//     return (count);
// }

static void	check(char c, va_list tmp, int *i)
{
	if (c == 'c')
		ft_putchar(va_arg(tmp, int), i);
	else if (c == 's')
		ft_putstr(va_arg(tmp, char *), i);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(tmp, int), i);
	else if (c == 'u')
		ft_putnbr_ui(va_arg(tmp, unsigned int), i);
	else if (c == 'x')
		ft_putnbr_hexa(va_arg(tmp, unsigned int), i);
	else if (c == 'X')
		ft_putnbr_hexa_up(va_arg(tmp, unsigned int), i);
	else if (c == 'p')
		ft_putadres(va_arg(tmp, unsigned long), i);
	else if (c == '%')
		ft_putchar('%', i);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	tmp;

	count = 0;
	va_start(tmp, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			check(*s, tmp, &count);
			s++;
		}
		else
		{
			ft_putchar(*s, &count);
			s++;
		}
	}
	va_end(tmp);
	return (count);
}
