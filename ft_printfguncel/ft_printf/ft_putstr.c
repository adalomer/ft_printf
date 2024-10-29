/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:16:33 by omadali           #+#    #+#             */
/*   Updated: 2024/10/29 23:51:30 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putstr(char *a)
{
	int b;
	int d;

	d = 0;
	if ( a == 0)
	{
		d += ft_putstr("(null)");
		return(d);
	}
	b = 0;
	while(a[b])
		d += ft_putchar(a[b++]);
	return(d);
}