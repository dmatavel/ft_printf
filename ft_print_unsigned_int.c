/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:33:03 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/14 19:25:19 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);

int	ft_print_unsigned_int(unsigned int n)
{
	int				ret;
	unsigned int	digit;

	ret = 0;
	digit = n;
	if (digit == 0)
		ret++;
	while (digit != 0)
	{
		digit /= 10;
		ret++;
	}
	ft_put_unsigned_nbr_fd(n, 1);
	return (ret);
}

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	if (fd < 0)
		return ;
	if (n > 9)
		ft_put_unsigned_nbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + 48, fd);
}
