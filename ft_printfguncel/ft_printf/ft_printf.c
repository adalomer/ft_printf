/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:26:21 by omadali           #+#    #+#             */
/*   Updated: 2024/10/30 05:32:09 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libftprintf.h"

static int ft_checker(char a, va_list args, int *d)
{
	int ret;

	ret = 0;
	if (a == '%')
		ret = ft_putchar('%');
	else if (a == 's')
		ret = ft_putstr(va_arg(args, char *));
	else if (a == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (a == 'p')
		ret = ft_adress(va_arg(args, void *));
	else if (a == 'd' || a == 'i')
		ret = ft_putnbr(va_arg(args, int));
	else if (a == 'u')
		ret = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (a == 'x')
		ret = ft_hexadecimal(va_arg(args, unsigned int), 0);
	else if (a == 'X')
		ret = ft_hexadecimal(va_arg(args, unsigned int), 1);
	if (ret == -1) 
		return (-1);
	*d += ret;
	return (0);
}

static int handle_format(const char *a, int *b, va_list args, int *d)
{
	(*b)++;
	int ret = ft_checker(a[*b], args, d);
	if (ret == -1)
		return (-1);
	return (ret);
}

static int handle_char(const char c, int *d)
{
	int ret = ft_putchar(c);
	if (ret == -1) // Hata kontrolü
		return (-1);
	*d += ret;
	return (0);
}

int ft_printf(const char *a, ...)
{
	int d = 0;
	int b = 0;
	int ret;
	va_list args;
	
	va_start(args, a);
	while (a[b])
	{
		if (a[b] == '%')
			ret = handle_format(a, &b, args, &d);
		else
			ret = handle_char(a[b], &d);

		if (ret == -1)
		{
			va_end(args);
			return (-1);
		}
		b++;
	}
	va_end(args);
	return (d);
}
