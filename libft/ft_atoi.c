/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:15:04 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/22 16:17:49 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	base;

	index = 0;
	sign = 1;
	base = 0;
	while (ft_isspace(str[index]))
		index++;
	if (str[index] == '-' || str[index] == '+')
		sign = 1 - 2 * (str[index++] == '-');
	while (ft_isdigit(str[index]))
	{
		base = base * 10 + str[index] - '0';
		index++;
	}
	return (sign * base);
}
