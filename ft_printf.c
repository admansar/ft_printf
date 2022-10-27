/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:30:13 by admansar          #+#    #+#             */
/*   Updated: 2022/10/27 17:35:05 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *fprint, ...)
{
    va_list l;
    int i = 0;
	int j;
	unsigned int alpha;
    char c;
	char *ptr;
    va_start (l, fprint);
    while (fprint[i])
    {
        if(fprint[i] == '%')
        {
            i++;

            if (fprint[i] == 'c')
            {
				c = va_arg (l,int);
                write(1, &c, 1);
            }
			else if (fprint[i] == 's')
			{
				ptr = va_arg(l, char *);
			 	ft_putstr(ptr);
			 }
			else if (fprint[i] == 'd' || fprint[i] == 'i')
			{
				j = va_arg(l, int);
				ft_putnbr(j);		
			}
			else if (fprint[i] == 'u')
			{
				alpha = va_arg(l, unsigned int);
				ft_putnbr_ui(alpha);
			}
			else if (fprint[i] == 'x')
			{
				j = va_arg(l, int);
				ft_putnbr_hexa(j,0);
			}
			else if (fprint[i] == 'X')
			{
				j = va_arg(l, int);
				ft_putnbr_hexa(j,1);
			}
        }
		
        else 
        write (1, &fprint[i], 1);
        i++;
    }
    va_end(l);
    return i;
}
