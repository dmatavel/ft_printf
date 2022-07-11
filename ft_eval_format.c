/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:20:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/11 12:29:01 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_eval_format(va_list args, const char format)
{
	int ret;
	
	ret = 0;
	if (format == 'c')
		ret += ft_print_char(va_arg(args, int));
	return (ret);
}
