/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:32:29 by lwencesl          #+#    #+#             */
/*   Updated: 2022/11/29 19:39:29 by lwencesl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	printf("Printf\n");
	printf("test %d\nnbr\nvamonos!\n\n", printf("test %x\n", 1234567890));
	ft_printf("ft_printf\n");
	ft_printf("test %d\nnbr\nvamonos! ", ft_printf("test %%x\n", 1234567890));
	return (0);
}
