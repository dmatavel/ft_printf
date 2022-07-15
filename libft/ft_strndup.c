/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:02:00 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/22 16:03:24 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;

	str = (char *)ft_calloc(sizeof(char), n + 1);
	if (!str)
		return (NULL);
	ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
