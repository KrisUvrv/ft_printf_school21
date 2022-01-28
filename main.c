/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebloodbe <ebloodbe@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:08:52 by ebloodbe          #+#    #+#             */
/*   Updated: 2021/12/18 13:21:57 by ebloodbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> 
#include <stddef.h>
#include <limits.h>


int	main(void)
{
	char *s = "hello";
	
	int c_0 = ft_printf("c_0: %c %c %c\n\n", 'a', '1', '2' );
	int c_1 = printf("c_1: %c %c %c\n\n", 'a', '1', '2' );
	int s_0 = ft_printf("s_0: %s %s %s %s\n\n", "hello", "World", NULL, "hello%");
	int s_1 = printf("s_1: %s %s %s %s\n\n", "hello", "World", NULL, "hello%");
	int p_0 = ft_printf("p_0: %p %p %p %p \n\n", ULONG_MAX, *s, 9, (void *)5);
	int p_1 = printf("p_1: %p %p %p %p \n\n", ULONG_MAX, *s, 9, (void *)5);
	int d_0 = ft_printf("d_0: %d %d %d %d %d %d %d\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	int d_1 = printf("d_1: %d %d %d %d %d %d %d\n\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	int i_0 = ft_printf("i_0: %i\n\n", INT_MAX);
	int i_1 = printf("i_1: %i\n\n", INT_MAX);
	int u_0 = ft_printf("u_0: %u\n\n", ULONG_MAX);
	int u_1 = printf("u_1: %u\n\n", ULONG_MAX);
	int x_0 = ft_printf("x_0: %x\n\n", 333);
	int x_1 = printf("x_1: %x\n\n", 333);
	int X_0 = ft_printf("X_0: %X\n\n", -567);
	int X_1 = printf("X_1: %X\n\n", -567);
	int percent_0 = ft_printf("percent_0: %% %% %%\n\n");
	int percent_1 = printf("percent_1: %% %% %%\n\n");
	int mix_0 = ft_printf("mix_0: %c %p %u %X %%\n\n", 'a', "2022", -678, -12345678);
	int mix_1 = printf("mix_1: %c %p %u %X %%\n\n", 'a', "2022", -678, -12345678);
	int trash_0 = ft_printf("trash_0: %r %%%%%% %-%\n\n");
	int trash_1 = printf("trash_1: %r %%%%%% %-%\n\n");

	ft_printf("length c_0 = %d\n", c_0);
	printf("length c_1 = %d\n\n",c_1);
	ft_printf("length s_0 = %d\n", s_0);
	printf("length s_1 = %d\n\n", s_1);
	ft_printf("length d_0 = %d\n", d_0);
	printf("length d_1 = %d\n\n", d_1);
	ft_printf("length i_0 = %d\n", i_0);
	printf("length i_1 = %d\n\n", i_1);
	ft_printf("length x_0 = %d\n", x_0);
	printf("length x_1 = %d\n\n", x_1);
	ft_printf("length X_0 = %d\n", X_0);
	printf("length X_1 = %d\n\n", X_1);
	ft_printf("length percent_0 = %d\n", percent_0);
	printf("length percent_1 = %d\n\n", percent_1);
	ft_printf("length mix_0 = %d\n", mix_0);
	printf("length mix_1 = %d\n\n", mix_1);
	ft_printf("length trash_0 = %d\n", trash_0);
	printf("length trash_1 = %d\n\n", trash_1);
	
	return (0);
}
