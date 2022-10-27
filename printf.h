/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admansar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:39:40 by admansar          #+#    #+#             */
/*   Updated: 2022/10/27 17:54:36 by admansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef char c;
int		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_putnbr(int n);
void	ft_putnbr_ui(unsigned int n);
void	ft_putnbr_hexa(int n, int oneorzero);
char	*upup(char *c);

# endif
