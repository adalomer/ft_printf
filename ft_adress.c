/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:13:23 by omadali           #+#    #+#             */
/*   Updated: 2024/11/04 14:24:19 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# define NULL (void*)0

int	ft_adress(void *a)
{
	int				d;
	unsigned long	f;

	d = 0;
	f = (unsigned long)a;
	d = 0;
	d += ft_putchar('0');
	d += ft_putchar('x');
	d += ft_hexadecimal(f, 'x');
	return (d);
}
