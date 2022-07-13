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

/*
static void	swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

static char *reverse(char *buffer, int i, int j)
{
	while (i < j)
		swap(&buffer[i++], &buffer[j--]);
	return (buffer);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static char *itoa_base(int value, char *buffer, int base)
{
	int i;
	int n;
	int r;

	if (base < 2 || base > 32)
		return (buffer);
	n = ft_abs(value);

	i = 0;
	while (n)
	{
		r = n % base;
		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;
		n = n / base;
	}
	if (i == 0)
		buffer[i++] = '0';
	if (value < 0 && base == 10)
		buffer[i++] = '-';
	buffer[i] = '\0';
	reverse(buffer, 0, i - 1i);
	return (ft_strdup(buffer));
}
*/

#include "ft_printf.h"

void	ft_putnbr_hex_fd(unsigned int n, int fd)
{
	int r;
	char ld;
	char rd;

	if (fd < 0)
		return ;
	/*
	if (n > 15)
		ft_putnbr_hex_fd(n / 16, fd);
	if (n > 9)
		ft_putchar_fd((n % 16 - 10) + 97, fd);
	else
		ft_putchar_fd(n % 16 + 48, fd);
	*/
	while(n)
	{
		r = n % 16;
		if(r >= 10)
			rd = 97 + (r - 10);
		else
			ld = 48 + r;
		n = n / 16;
	}
	ft_putchar_fd(rd, 1);
	ft_putchar_fd(ld, 1);
	if (n == 0)
		ft_putchar_fd(48, 1);
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
