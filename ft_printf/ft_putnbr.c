/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:07:18 by omadali           #+#    #+#             */
/*   Updated: 2024/10/27 18:20:46 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int	ft_putnbr(int n)
{
    long int a;
	int b;
    
	b = 0;
    a = n;
    if ( a == 0)
    {
        ft_putchar('0');
        return (1);
    }
    if ( a < 0)
    {
        ft_putchar('-');
        a *= -1;
    }
    if (a > 9)
    {
        ft_putnbr(a / 10);
        ft_putnbr(a % 10);
    }
    else if ( a < 9)
       b += ft_putchar(a + '0');
	return(b);
}