/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:01:16 by lwencesl          #+#    #+#             */
/*   Updated: 2022/12/13 19:58:29 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(double nbr, char *base, double size)
{
	int	cont;

	cont = 0;
	if (nbr < 0)
	{
		cont += write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= size)
		cont += ft_putnbr(nbr / size, base, size);
	cont += write (1, &base[((unsigned long) nbr) % ((unsigned long) size)], 1);
	return (cont);
}

int	putpoint(unsigned long long nbr, char *base, unsigned long long size)
{
	unsigned long long	cont;

	cont = 0;
	if (size != 16)
	{
		if (!nbr)
			return (write(1, "(nil)", 5));
		size = 16;
		write (1, "0x", 2);
		cont = 2;
	}
	if (nbr >= size)
		cont += putpoint(nbr / size, base, size);
	cont += write (1, &base[(nbr) % (size)], 1);
	return (cont);
}

int	puthexa(double nbr, char *base, double size)
{
	int	cont;

	cont = 0;
	if (nbr >= size)
		cont += puthexa(nbr / size, base, size);
	cont += write (1, &base[((unsigned long) nbr) % ((unsigned long) size)], 1);
	return (cont);
}
