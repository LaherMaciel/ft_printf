/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:44:23 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/29 19:41:29 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s);
int	ft_putchr(char s);
int	ft_godnbr(double nbr, char *base, double size);
int	ft_pntnbr(double nbr, char *base, double size);
int	ft_hxnbr(unsigned int nbr, char *base, unsigned int size);

int	ft_printaux(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchr(va_arg(args, int)));
	if (format == 'i' || format == 'd')
		return (ft_godnbr(va_arg(args, int), "0123456789", 10));
	if (format == 'u')
		return (ft_godnbr(va_arg(args, unsigned int), "0123456789", 10));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'p')
		return (ft_pntnbr(va_arg(args, unsigned long), "0123456789abcdef", 17));
	if (format == 'X')
		return (ft_hxnbr(va_arg(args, unsigned long), "0123456789ABCDEF", 16));
	if (format == 'x')
		return (ft_hxnbr(va_arg(args, unsigned long), "0123456789abcdef", 16));
	return (0);
}
