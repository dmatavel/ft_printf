/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:20:51 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/13 17:36:20 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_hex_fd(unsigned int n, int fd)
{
	char *radix;

	radix = "0123456789abcdef";
	if (fd < 0)
		return ;
	if (n >= 16)
		ft_putnbr_hex_fd(n / 16, fd);
	if (n > 10)
		ft_putchar_fd(radix[n % 16], fd);
	else
		ft_putchar_fd(radix[n % 16], fd);
}

int	ft_print_lower_hex(unsigned int n)
{
	int	ret;
	unsigned int digit;

	ret = 0;
	digit = n;
	if (digit == 0)
		ret++;
	while (digit != 0)
	{
		digit /= 16;
		ret++;
	}
	ft_putnbr_hex_fd(n, 1);
	return (ret);
}
