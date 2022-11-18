/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:39:45 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/18 06:56:33 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	cont;
	va_list	tab;

	if (!format)
		return (0);
	i = 0;
	cont = -1;
	va_start(tab, format);
	while (format[++cont])
	{
		if (format[cont] == '%')
			i += ft_printaux(format[cont + 1], &tab);
		else
			i += write(1, &format[cont], 1);
	}
	va_end(tab);
	return (i);
}
