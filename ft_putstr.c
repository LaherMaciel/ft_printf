/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <lwencesl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 23:35:55 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/30 23:35:55 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchr(char s)
{
	return (write (1, &s, 1));
}

int	ft_putstr(char *s)
{
	size_t	i;

	if (!s)
		return (write (1, "(null)", 6));
	i = -1;
	while (s[++i] != '\0')
		write (1, &s[i], 1);
	return (i);
}
