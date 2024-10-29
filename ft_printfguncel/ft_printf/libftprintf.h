/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:19:17 by omadali           #+#    #+#             */
/*   Updated: 2024/10/29 22:53:46 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <stdarg.h>

int ft_putstr(char *a);
int ft_printf(const char *a, ...);
int ft_putchar(int a);
int  ft_hexadecimal(unsigned long int args,int a);
int	ft_putnbr(int n);
int ft_putchar(int a);
int ft_adress(void *a);
int ft_putnbr_unsigned(unsigned int b);

#endif