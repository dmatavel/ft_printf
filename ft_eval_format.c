/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:20:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/24 16:04:16 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_not_format(int c)
{
	if (c != 'u' || c != 'd' || c != 'c'
			|| c != 's' || c != 'u' || c != 'p'
		   || c != 'x' || c != 'X' || c != '%')
		return (c);
}

int	ft_eval_format(t_print *tab, const char *format, int index)
{
	int	ret;

	ret = 0;
	while (format[index++])
	{
		if (format[index] == 'c')
			ft_print_char(tab);
		index++;
	}
	return (ret);
}
