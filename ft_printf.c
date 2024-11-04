/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:26:21 by omadali           #+#    #+#             */
/*   Updated: 2024/11/04 14:23:11 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checker(char a, va_list args, int *d)
{
	int	ret;

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
	else if (a == 'x' || a == 'X')
		ret = ft_hexadecimal(va_arg(args, unsigned int), a);
	else
		ret = ft_putchar('%') + ft_putchar(a);
	if (ret == -1)
		return (-1);
	*d += ret;
	return (0);
}

static int	handle_format(const char *a, int *b, va_list args, int *d)
{
	int	ret;

	(*b)++;
	ret = ft_checker(a[*b], args, d);
	if (ret == -1)
		return (-1);
	return (ret);
}

static int	handle_char(const char c, int *d)
{
	int	ret;

	ret = ft_putchar(c);
	if (ret == -1)
		return (-1);
	*d += ret;
	return (0);
}

int	ft_printf(const char *a, ...)
{
	int		d;
	int		b;
	int		ret;
	va_list	args;

	d = 0;
	b = 0;
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
