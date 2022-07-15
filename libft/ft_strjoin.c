/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:25:40 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/21 01:29:14 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *   Description:
 *   ft_strjoin allocates (with malloc(3)) and returns a new string, which
 *   is the result of the concatenation of 's1' and 's2'.
 *	
 *   Parameters:
 *   's1' is the prefix string. 's2' is the suffix string.
 *
 *   Return values:
 *   The new string or NULL if the allocation fails.
 */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	s3 = malloc(sizeof(char) * len);
	if (s3 == NULL)
		return (NULL);
	ft_memmove(s3, s1, (ft_strlen(s1) + 1));
	ft_memmove(s3 + ft_strlen(s1), s2, (ft_strlen(s2) + 1));
	return (s3);
}
