/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:21:41 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/11 12:54:01 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int	ret;

	if (!s)
		return (write(1, "(null)", 6));
	ret = 0;
	ft_putstr_fd(s, 1);
	return (ret += ft_strlen(s));
}
