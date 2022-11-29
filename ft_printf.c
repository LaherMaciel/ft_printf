/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 04:39:45 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/29 19:51:32 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printaux(const char format, va_list args);

char	*ft_strchr(const char *str, int c)
{
	size_t	a;

	a = -1;
	while (++a <= ft_strlen(str))
		if (((unsigned char *)str)[a] == (unsigned char) c)
			return ((char *)str + a);
	return (NULL);
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
		if (format[cont] == '%' && ft_strchr("idupxXcs", format[cont + 1]) != NULL)
		{
			i += ft_printaux(format[cont + 1], args);
			cont++;
		}
		else
			i += write(1, &format[cont], 1);
	}
	va_end(args);
	return (i);
}
