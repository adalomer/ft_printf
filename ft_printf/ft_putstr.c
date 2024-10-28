/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:16:33 by omadali           #+#    #+#             */
/*   Updated: 2024/10/27 17:58:20 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

int ft_putstr(char *a)
{
	int b;
	int d;

	d = 0;
	b = 0;
	while(a[b])
		d += ft_putchar(a[b++]);
	return(d);

}