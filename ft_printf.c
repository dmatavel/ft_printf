/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:39:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/04 15:55:38 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_eval_format(const char *format);
int	ft_print_char(char c);

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
			ret += ft_eval_format(&format[i + 1]);
		}
		else
			ret += write(1, &format[i], 1);
		i++;
	}	
	va_end(args);
	return (ret);
}

int	ft_eval_format(const char *format)
{
	va_list args;	
	int	ret;

	ret = 0;
	if (*format == 'c')
		ret += ft_print_char(va_arg(args, int));
	return (ret);
}

int	ft_print_char(char c)
{
	int	ret;

	ret = 0;
	ret += write(1, &c, 1);
	return (ret);
}
