/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:29:17 by lwencesl          #+#    #+#             */
/*   Updated: 2022/12/13 19:10:12 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

int	ft_printf(const char *a, ...);
int	ft_putstr(char *s);
int	ft_putchr(char s);
int	ft_putnbr(double nbr, char *base, double size);
int	puthexa(double nbr, char *base, double size);
int	putpoint(unsigned long long nbr, char *base, unsigned long long size);

#endif
