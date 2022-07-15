/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:20:24 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/01 18:09:49 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dc;
	const char	*sc;

	if (dest == NULL && src == NULL)
		return (0);
	dc = dest;
	sc = src;
	while (n--)
		*dc++ = *sc++;
	return (dest);
}
