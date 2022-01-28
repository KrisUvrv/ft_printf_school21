/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebloodbe <ebloodbe@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:07 by ebloodbe          #+#    #+#             */
/*   Updated: 2021/12/18 19:42:06 by ebloodbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversions(char f, va_list *ap)
{
	int	count;

	count = 0;
	if (f == 'c')
		count = ft_putchar(va_arg(*ap, int));
	else if (f == 's')
		count = ft_putstr(va_arg(*ap, char *));
	else if (f == 'p')
		count = ft_putptr(va_arg(*ap, unsigned long));
	else if (f == 'd' || f == 'i')
		count = ft_putnbr(va_arg(*ap, int));
	else if (f == 'u')
		count = ft_putnbr(va_arg(*ap, unsigned int));
	else if (f == 'x')
		count = ft_print_x_lower(va_arg(*ap, unsigned int));
	else if (f == 'X')
		count = ft_print_x_upper(va_arg(*ap, unsigned int));
	else if (f == '%')
		count = ft_putchar('%');
	else
		count = ft_putchar(f);
	return (count);
}

int	ft_printf(const char *f_str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, f_str);
	while (f_str[i])
	{
		if (f_str[i] == '%')
			count += ft_conversions(f_str[++i], &ap);
		else
			count += ft_putchar(f_str[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
