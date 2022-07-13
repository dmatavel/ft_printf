/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:20:51 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/13 14:26:21 by dmatavel         ###   ########.fr       */
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
		digit /= 10;
		ret++;
	}
	// function to print a hex nbr;
	return (ret);
}