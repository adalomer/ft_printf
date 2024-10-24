#include <stdio.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:26:21 by omadali           #+#    #+#             */
/*   Updated: 2024/10/22 08:31:14 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


int ft_putchar(char c)
{
    write(1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
    int count;

    count = 0;
    while (str && *str)
    {
        count += ft_putchar(*str);
    	*str++;
    }
    return count;
}

int ft_putnbr(int n)
{
    int count;

    count = 0;
    if (n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        count += ft_putnbr(n / 10);
    }
    count += ft_putchar(n % 10 + '0');
    return count;
}
int ft_checker(char a,va_list args, int *d)
{
	if (a == '%')
		*d += ft_putchar('%');
	else if (a == 's')
		*d += ft_putstr(va_arg(args,char *));
	/*else if ( a[++d] == 'c')
		*d += ft_putchar(va_arg(args,char));
	else if (a[++d] == 'p')
		*d += ft_void*;
	else if (a[++d] == 'd')
		*d += ft_putnbr(va_arg(args,int*));
	else if ( a[++d] == 'i')
		*d +=ft_putnbr(va_arg(args,int*));
	else if(a[++d] == 'u')
		*d += ft_putnbr(var_arg(args,int*));
	//else if(a[++d] == 'x')
		//*d += ft_hexdecimal(va_arg(args,int*));
	//else if ( a[++d] == 'X')
		//*d += ft_hexadecimalbüyük;*/
}
int ft_printf(const char *a, ...)
{
	int *d;
	int b;

	if(a)
		return(0);
	b = 0;
	d = 0;
	va_list args;
	va_start(args,a);
	while(a[b])
	{
		if(a[b] == '%')
			ft_checker(a[++b],args,d);
		else
		*d += ft_putchar(a[b++]);
	}
	va_end(args);
	return (*d);
}

int main() {
    /*int decimal = 42;
    int octal = 052; // Sekizli (octal) 42
    int hexadecimal = 0x2A; // Onaltılık (hexadecimal) 42

    printf("Using %%d: %d\n", decimal); // 42
    printf("Using %%d: %d\n",octal); // 42
    printf("Using %%d: %d\n",hexadecimal); // 42
    printf("Using %%i: %i\n", decimal); // 42
    printf("Using %%i with octal: %i\n", octal); // 42
    printf("Using %%i with hexadecimal: %i\n", hexadecimal); // 42
    for (int x = 0;x < 50;x++)
    printf("%x\n",x);
    printf("%x\n",720);
    return 0; */
    char b[] = "anam";
    ft_printf("%s",b);
}
