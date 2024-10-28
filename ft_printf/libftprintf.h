/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:19:17 by omadali           #+#    #+#             */
/*   Updated: 2024/10/27 22:26:40 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>

int ft_putstr(char *a);
int ft_printf(const char *a, ...);
int ft_putchar(int a);
int  ft_hexadecimal(int args,int a);
int	ft_putnbr(int n);
int ft_putchar(int a);


#endif