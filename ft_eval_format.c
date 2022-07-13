/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:20:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/13 13:19:15 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_eval_format(va_list args, const char format)
{
	int ret;
	
	ret = 0;
	if (format == 'c')
		ret += ft_print_char(va_arg(args, int));
	if (format == 's')
		ret += ft_print_str(va_arg(args, char *));
	if (format == 'd' || format == 'i')
		ret += ft_print_int(va_arg(args, int));
	if (format == 'u')
		ret += ft_print_unsigned_int(va_arg(args, unsigned int));
	if (format == 'x')
		ret += ft_print_lower_hex(va_arg(args, unsigned int));
	if (format == '%')
		ret += write(1, "%", 1);
	return (ret);
}
