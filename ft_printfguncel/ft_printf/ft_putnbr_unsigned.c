/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 22:49:21 by omadali           #+#    #+#             */
/*   Updated: 2024/10/29 23:07:51 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr_unsigned(unsigned int b)
{
    int a;

    a = 0;
    if(b > 9)
    {
       a += ft_putnbr_unsigned(b / 10);
       a += ft_putnbr_unsigned(b % 10);
    }
    else if (b < 10)
       a += ft_putchar('0'+ b);
    return(a);
}