/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_godnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:01:16 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/18 06:59:29 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_godnbr(double nbr, char *base, double size)
{
	int	cont;

	cont = 0;
	if (nbr < 0)
	{
		cont += write (1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= size)
		cont += ft_godnbr(nbr / size, base, size);
	cont += write (1, &base[((unsigned long) nbr) % ((unsigned long) size)], 1);
	return (cont);
}
