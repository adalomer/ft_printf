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
#include "libftprintf.h"
// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }   t_list;

// typedef struct s_list
// {
// 	char a; //1 + 3 |a| | | |b |b | b|b |
//     int b; // 4
//     int c; // 1 + 3
// }   t_list;

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (0);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }

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
    // t_list lst_1 = ft_lstnew("1");
    // t_list lst_2 = ft_lstnew("2");
    // t_list lst_3 = ft_lstnew("3");
    // lst_1->next = lst_2;
    // lst_2->next = lst_3;
     char b[] = "anam";
     char d[] = "anam";
    // char c[] = "anam";
	
     printf("%u\n",1231233);
     ft_printf("%u",1231233);
    // while(lst_1)
    // {
    //     printf("%s", (char*)lst_1.content);
    //     lst_1 = lst_1->next;
    // }


}
// #include <stdarg.h>
// #include <unistd.h>
// #include "libftprintf.h"

// static void ft_checker(char a, va_list args, int *d)
// {
// 	if (a == '%')
// 		*d += ft_putchar('%');
// 	else if (a == 's')
// 		*d += ft_putstr(va_arg(args, char *));
// 	else if (a == 'c')
// 		*d += ft_putchar(va_arg(args, int));
// 	else if (a == 'p')
// 		*d += ft_adress(va_arg(args, void *));
// 	else if (a == 'd' || a == 'i')
// 		*d += ft_putnbr(va_arg(args, int));
// 	else if (a == 'u')
// 		*d += ft_putnbr_unsigned(va_arg(args, unsigned int));
// 	else if (a == 'x')
// 		*d += ft_hexadecimal(va_arg(args, unsigned int), 0);
// 	else if (a == 'X')
// 		*d += ft_hexadecimal(va_arg(args, unsigned int), 1);
// }

// int ft_printf(const char *a, ...)
// {
// 	int d = 0;
// 	int b = 0;
// 	va_list args;
// 	va_start(args, a);

// 	while (a[b])
// 	{
// 		if (a[b] == '%')
// 			ft_checker(a[++b], args, &d);
// 		else
// 			d += ft_putchar(a[b]);
// 		b++;
// 	}
// 	va_end(args);
// 	return (d);
// }

// int ft_hexadecimal(unsigned long int args, int a)
// {
// 	char *e;
// 	int d = 0;

// 	e = (a == 1) ? "0123456789ABCDEF" : "0123456789abcdef";
// 	if (args >= 16)
// 		d += ft_hexadecimal(args / 16, a);
// 	d += ft_putchar(e[args % 16]);
// 	return (d);
// }

// int ft_adress(void *a)
// {
// 	int d = 0;

// 	if (!a)
// 		return (ft_putstr("(nil)"));
// 	d += ft_putchar('0');
// 	d += ft_putchar('x');
// 	d += ft_hexadecimal((unsigned long)a, 0);
// 	return (d);
// }

// int ft_putchar(int a)
// {
// 	write(1, &a, 1);
// 	return (1);
// }

// int	ft_putnbr(int n)
// {
// 	long int a = n;
// 	int b = 0;

// 	if (a == 0)
// 		return (ft_putchar('0'));
// 	if (a < 0)
// 	{
// 		b += ft_putchar('-');
// 		a = -a;
// 	}
// 	if (a > 9)
// 		b += ft_putnbr(a / 10);
// 	b += ft_putchar((a % 10) + '0');
// 	return (b);
// }

// int ft_putnbr_unsigned(unsigned int n)
// {
// 	int b = 0;

// 	if (n > 9)
// 		b += ft_putnbr_unsigned(n / 10);
// 	b += ft_putchar((n % 10) + '0');
// 	return (b);
// }

// int ft_putstr(char *a)
// {
// 	int d = 0;
// 	int b = 0;

// 	if (!a)
// 		return (ft_putstr("(null)"));
// 	while (a[b])
// 		d += ft_putchar(a[b++]);
// 	return (d);
// }
