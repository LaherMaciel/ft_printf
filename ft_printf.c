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

int	ft_putstr(char *s);
int	ft_putchr(char s);
int	ft_putnbr(double nbr, char *base, double size);
int	puthexa(double nbr, char *base, double size);
int	putpoint(unsigned int nbr, char *base, unsigned int size);

char	*ft_strchr(const char *str, int c)
{
	size_t	a;
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	a = -1;
	while (++a <= i)
		if (((unsigned char *)str)[a] == (unsigned char) c)
			return ((char *)str + a);
	return (NULL);
}

char	ft_helper(const char *format, char c, size_t cont)
{
	if (format[cont + 1] != '\0')
		c = format[cont + 1];
	else
		c = format[cont];
	return (c);
}

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
		return (puthexa(va_arg(args, unsigned int), "0123456789ABCDEF", 16));
	if (format == 'x')
		return (puthexa(va_arg(args, unsigned int), "0123456789abcdef", 16));
	if (format == 'p')
		return (putpoint(va_arg(args, unsigned int), \
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
		if (format[cont] == '%' && ft_strchr("idupxXcs", \
			ft_helper(format, 'c', cont)) != NULL)
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
