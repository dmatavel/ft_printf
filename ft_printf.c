/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:39:57 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/14 19:33:08 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	i = 0;
	ret = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret += ft_eval_format(args, format[i + 1]);
			i++;
		}
		else
			ret += write(1, &format[i], 1);
		i++;
	}	
	va_end(args);
	return (ret);
}
