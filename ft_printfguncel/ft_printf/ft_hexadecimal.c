/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:52:46 by omadali           #+#    #+#             */
/*   Updated: 2024/11/01 23:58:00 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexadecimal(unsigned long int args, int a)
{
	char	*e;
	int		d;

	d = 0;
	e = "0123456789abcdef";
	if (a == 1)
		e = "0123456789ABCDEF";
	if (args >= 16)
		d += ft_hexadecimal(args / 16, a);
	d += ft_putchar(e[args % 16]);
	return (d);
}
