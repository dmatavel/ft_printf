/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:20:51 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/17 01:35:25 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, const char *base)
{
	if (n >= 16)
		ft_print_hex(n / 16, base);
	if (n > 10)
		ft_putchar_fd(base[n % 16], 1);
	else
		ft_putchar_fd(base[n % 16], 1);
	return (ft_cntdgt(n, 16));
}
