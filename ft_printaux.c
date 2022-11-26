/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:44:23 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/26 16:50:44 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s);
int	ft_putchr(char s);
int	ft_godnbr(double nbr, char *base, double size);

int	ft_printaux(char c, va_list *tab)
{
	if (c == '%')
	{
		write (1, "%", 1);
		return (0);
	}
	if (c == 'c')
		return (ft_putchr(va_arg(*tab, int)));
	if (c == 'i' || c == 'd')
		return (ft_godnbr(va_arg(*tab, int), "0123456789", 10));
	if (c == 'u')
		return (ft_godnbr(va_arg(*tab, unsigned int), "0123456789", 10));
	if (c == 's')
		return (ft_putstr(va_arg(*tab, char *)));
	if (c == 'p')
		return (ft_godnbr(va_arg(*tab, unsigned long), "0123456789abcdef", 16));
	if (c == 'X')
		return (ft_godnbr(va_arg(*tab, unsigned long), "0123456789ABCDEF", 16));
	if (c == 'x')
		return (ft_godnbr(va_arg(*tab, unsigned long), "0123456789abcdef", 16));
	return (0);
}
