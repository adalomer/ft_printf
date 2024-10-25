/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:52:46 by omadali           #+#    #+#             */
/*   Updated: 2024/10/25 13:32:03 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_putchar(int a)
{
    write(1,&a,1);
    return (1);
}

void  ft_hexadecimal(int h, int *d,int a)
{
    char    *e;

    e = "0123456789abcdef";
    if (a == 1)
        e = "0123456789ABCDEF";
    if (h > 15)
        ft_hexadecimal(h / 16,d,a);
    ft_putchar(e[h % 16]);
    if (h < 16)
        *d = *d + 1;
}
