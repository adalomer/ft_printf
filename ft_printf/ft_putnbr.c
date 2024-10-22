/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:07:18 by omadali           #+#    #+#             */
/*   Updated: 2024/10/21 23:07:47 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int a)
{
    write(1,&a,1);
}
void	ft_putnbr(int n)
{
    long int a;
    
    a = n;
    if ( a == 0)
    {
        ft_putchar('0');
        return ;
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
        ft_putchar(a + '0');
}