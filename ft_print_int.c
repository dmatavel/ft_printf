/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:33:03 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/11 13:58:17 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int i)
{
	int ret;
	int	digit;
	
	ret = 0;
	digit = i;
	if (digit == 0 || digit < 0)
		ret++;
	while (digit != 0)
	{
		digit /= 10;
		ret++;
	}
	ft_putnbr_fd(i, 1);
	return (ret);
}
