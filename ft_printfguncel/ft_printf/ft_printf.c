/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:26:21 by omadali           #+#    #+#             */
/*   Updated: 2024/10/29 22:48:43 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libftprintf.h"

static void ft_checker(char a, va_list args, int *d)
{
	if (a == '%')
		*d += ft_putchar('%');
	else if (a == 's')
		*d += ft_putstr(va_arg(args, char *));
	else if (a == 'c')
		*d += ft_putchar(va_arg(args, int));
	else if (a == 'p')
		*d += ft_adress(va_arg(args, void *));
	else if (a == 'd' || a == 'i')
		*d += ft_putnbr(va_arg(args, int));
	else if (a == 'u')
		*d += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (a == 'x')
		*d += ft_hexadecimal(va_arg(args, unsigned int), 0);
	else if (a == 'X')
		*d += ft_hexadecimal(va_arg(args, unsigned int), 1);
}

int ft_printf(const char *a, ...)
{
	int d;
	int b;

	d = 0;
	b = 0;
	va_list args;
	va_start(args, a);
	while (a[b])
	{
		if (a[b] == '%')
			ft_checker(a[++b], args, &d);
		else
			d += ft_putchar(a[b]);
		b++;
	}
	va_end(args);
	return (d);
}
