/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:26:21 by omadali           #+#    #+#             */
/*   Updated: 2024/10/05 20:54:00 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


void ft_putstr(char *a)
{
int b = 0;
while(a[b])
	write(1,&a[b++],1);
}

int ft_printf(const char *a, ...)
{
	int d= 0;
	va_list args;
	va_start(args,a);
	while(a[d])
	{
		if(a[d] == '%')
		{
			if (a[++d] == 's')
				ft_putstr(va_arg(args,char *));
		}
		else
			write(1,&a[d],1);		
		d++;
	}
	va_end(args);
}
int main()
{
	char *b = "elalem";
	ft_printf("%s anam  %s,%s",b,"apoananas","kalleşapo");
}