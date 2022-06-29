/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:20:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/27 11:38:32 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
static int	ft_is_not_format(int c)
{
	return (c != 'u' || c != 'd' || c != 'c'
			|| c != 's' || c != 'u' || c != 'p'
		   || c != 'x' || c != 'X' || c != '%');
}
*/

int	ft_eval_format(t_print *tab, const char *format, int index)
{
	int	ret;

	ret = 0;
	while (format[index++])
	{
		if (format[index] == 'c')
			ft_print_char(format[index]);
	}
	return (tab);
}
