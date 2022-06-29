/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:39:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/27 22:19:57 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_print_char(t_print *tab)
{
	char a;                      
                          
    a = va_arg(tab->args, int);
    tab->tl += write(1, &a, 1);
}
int	ft_printf(const char *format, ...)
{
	t_print *tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	va_start(tab->args, format);
	while (format[i] != '\0')
	{
		if(format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					ft_print_char(tab);
					i++;
				}
				if else
				{
					(format[i + 1] == 'd')
				}
			}
		else
			tab->tl += write(1, &format[i], 1);
		i++;
	}
	ret = tab->tl;
	free(tab);
	printf("%d\n", ret);
	return (ret);
}

int	main(void)
{
	char	c;

	c = 'A';
	ft_printf("My ft_printf: hello, world %c 42 %c\n", c, c);
	printf("Original printf: hello, world %c 42 %c\n", c, c);
	ft_printf("My return: %d", (ft_printf("My ft_printf: hello, world %c 42 %c\n", c, c)));
	printf("Original return: %d", (printf("My ft_printf: hello, world %c 42 %c\n", c, c)));
	return (0);
}
