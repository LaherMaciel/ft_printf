/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:39:45 by lwencesl          #+#    #+#             */
/*   Updated: 2022/12/13 19:58:23 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printaux(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchr(va_arg(args, int)));
	if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (format == 'i' || format == 'd')
		return (ft_putnbr(va_arg(args, int), "0123456789", 10));
	if (format == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), "0123456789", 10));
	if (format == 'X')
		return (ft_putnbr(va_arg(args, unsigned int), "0123456789ABCDEF", 16));
	if (format == 'x')
		return (ft_putnbr(va_arg(args, unsigned int), "0123456789abcdef", 16));
	if (format == 'p')
		return (putpoint(va_arg(args, unsigned long long), \
			"0123456789abcdef", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	cont;
	va_list	args;

	if (!format)
		return (0);
	i = 0;
	cont = -1;
	va_start(args, format);
	while (format[++cont])
	{
		if (format[cont] == '%')
		{
			if (format[cont + 1] != '%')
				i += ft_printaux(format[cont + 1], args);
			else
				i += write(1, &format[cont], 1);
			cont++;
		}
		else
			i += write(1, &format[cont], 1);
	}
	va_end(args);
	return (i);
}
