/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:29:17 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/18 06:59:42 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *a, ...);
int	ft_printaux(char c, va_list *tab);
int	ft_putstr(char *s);
int	ft_putchr(char s);
int	ft_godnbr(double nbr, char *base, double size);

#endif
