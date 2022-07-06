/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:39:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/06 13:16:40 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_eval_format(const char *format, int i);
int	ft_print_char(char *c);

int	ft_printf(const char *format, ...)
{
	int	i;
	int	ret;
	va_list	args;

	i = 0;
	ret = 0;
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			ret += ft_eval_format(format, i);
			i++;
		}
		else
			ret += write(1, &format[i], 1);
		i++;
	}	
	va_end(args);
	return (ret);
}

int	ft_eval_format(const char *format, int i)
{
	int	ret;

	ret = 0;
	if (format[i + 1] == 'c')
		ret += ft_print_char((char *)format);
	return (ret);
}

int	ft_print_char(char *c)
{
	va_list	args;
	int		ret;
	char	nc;
	
	nc = (char )c;
	nc = va_arg(args, int);
	ret = 0;
	ret += write(1, &nc, 1);
	return (ret);
}
