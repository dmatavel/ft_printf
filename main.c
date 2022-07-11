/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:39:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/11 13:54:09 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("1) print char test\n");
	
	char	c;

	c = 'A';
	printf("%d\n", (ft_printf("My ft_printf: hello, world %c 42 %c\n", c, c)));
	printf("Original printf: hello, world %c 42 %c\n", c, c);
	
	ft_printf("2) print str test\n");

	char	str[] = "hello, world! hello, 42!";

	ft_printf("My ft_printf: %s This is it! \n", str);
	printf("Original printf: %s This is it!\n", str);
	printf("%d\n", printf(" NULL %s\n NULL ", NULL));

	ft_printf("3) print int test\n");
	
	ft_printf("r: %d", (ft_printf("%d\n", -1)));
	ft_printf("\n");
	printf("r: %d", (printf("%d\n", -1)));
	return (0);
}
