/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:52:46 by omadali           #+#    #+#             */
/*   Updated: 2024/10/24 20:16:11 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  hexadecimal(va_list args, int *d,int a)
{

char *b;
char *c;
int f;
int g;

f = args;
b = "0123456789abcdef";
c = "0123456789ABCDEF";
while(f > 0)
{
	f / 16;
	g++;
}
if ( a = 1)
{
	if (g > 0)
	{
	*d += putchar( b[f % 16 * g]);
	g--;
	}
	return(*d);
}
else
{
	if (g > 0)
	{
	*d += putchar( c[f % 16 * g]);
	g--;
	}
	return(*d);
}
}
/*#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
int ft_putchar(int a)
{
    write(1,&a,1);
    return (1);
}

int  ft_hex(int h, int *d,int a)
{
    char    *e;

    e = "0123456789abcdef";
    if (a == 1)
        e = "0123456789ABCDEF";
    if (n > 15)
        ft_hex(h / 16,d,);
    ft_putchar_fd(hex[n % 16]);
    if (n < 16)
        *d = *d + 1;
}
int main()
{
  
  int j = 5;
  ft_hexadecimal(55,&j,1);
}*/,
