/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:13:23 by omadali           #+#    #+#             */
/*   Updated: 2024/11/02 00:07:09 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_adress(void *a)
{
	int				d;
	unsigned long	f;

	d = 0;
	if (a == 0)
	{
		d += ft_putstr("(nil)");
		return (d);
	}
	f = (unsigned long)a;
	d = 0;
	d += ft_putchar('0');
	d += ft_putchar('x');
	d += ft_hexadecimal(f, 0);
	return (d);
}
