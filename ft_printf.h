/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebloodbe <ebloodbe@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:31:05 by ebloodbe          #+#    #+#             */
/*   Updated: 2021/12/16 10:22:05 by ebloodbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putptr(unsigned long n);
int	ft_putnbr(long long n);
int	ft_print_x_lower(unsigned int n);
int	ft_print_x_upper(unsigned int n);

#endif
