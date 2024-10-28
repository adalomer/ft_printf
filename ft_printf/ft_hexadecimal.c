/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:52:46 by omadali           #+#    #+#             */
/*   Updated: 2024/10/27 22:26:31 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libftprintf.h"

int  ft_hexadecimal(int args,int a)
{
    char    *e;
	int d;

	d = 0;
    e = "0123456789abcdef";
    if (a == 1)
        e = "0123456789ABCDEF";
    if (args > 15)
        d += ft_hexadecimal(args/=16,a);
    d += ft_putchar(e[args % 16]);
	return (d);
}
