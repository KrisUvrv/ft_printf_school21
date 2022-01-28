/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebloodbe <ebloodbe@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:09 by ebloodbe          #+#    #+#             */
/*   Updated: 2021/12/15 17:24:35 by ebloodbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

static int	ft_count_digits(long long n)
{
	unsigned int	num;
	int				count;

	count = 1;
	if (n < 0)
	{
		count++;
		num = n * -1;
	}
	else
		num = n;
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(long long n)
{
	unsigned int	num;
	int				count;

	count = ft_count_digits(n);
	if (n < 0)
	{
		ft_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num / 10 > 0)
	{
		ft_putnbr(num / 10);
		ft_putchar(num % 10 + '0');
	}
	else
		ft_putchar(num + '0');
	return (count);
}
