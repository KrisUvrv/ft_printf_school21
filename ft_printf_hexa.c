/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebloodbe <ebloodbe@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 23:24:21 by ebloodbe          #+#    #+#             */
/*   Updated: 2021/12/18 19:44:00 by ebloodbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_hexa(unsigned long n)
{
	char	*x;

	x = "0123456789abcdef";
	if (n > 15)
	{
		ft_hexa(n / 16);
		ft_hexa(n % 16);
	}
	else
		ft_putchar(x[n]);
}

int	ft_putptr(unsigned long n)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	ft_hexa(n);
	if (n == 0)
		count++;
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}

int	ft_print_x_lower(unsigned int n)
{
	int	count;

	count = 0;
	ft_hexa(n);
	if (n == 0)
		count++;
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}

static void	ft_hexa_upper(unsigned int n)
{
	char	*x;

	x = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_hexa_upper(n / 16);
		ft_hexa_upper(n % 16);
	}
	else
		ft_putchar(x[n]);
}

int	ft_print_x_upper(unsigned int n)
{
	int	count;

	count = 0;
	ft_hexa_upper(n);
	if (n == 0)
		count++;
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}
