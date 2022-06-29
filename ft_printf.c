/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:39:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/29 14:34:36 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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
				else if (format[i + 1] == 's')
				{
					ft_print_str(tab);
					i++;
				}
				else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				{
					ft_print_int(tab);
					i++;
				}
			}
		else
			tab->tl += write(1, &format[i], 1);
		i++;
	}
	ret = tab->tl;
	free(tab);
	return (ret);
}
