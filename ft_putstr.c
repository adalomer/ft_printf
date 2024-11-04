/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:16:33 by omadali           #+#    #+#             */
/*   Updated: 2024/11/02 02:02:53 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *a)
{
	int	d;
	int	ret;

	d = 0;
	if (a == 0)
		return (ft_putstr("(null)"));
	while (*a)
	{
		ret = ft_putchar(*a++);
		if (ret == -1)
			return (-1);
		d += ret;
	}
	return (d);
}
