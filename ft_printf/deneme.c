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
//#include "libftprintf.h"

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
    char d[] = "anam";
    char c[] = "anam";
	
    printf("%p\n%p \n %p",b,d,c);
}
