/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:38:09 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/21 02:37:10 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *   Description:
 *   ft_substr allocates (with malloc(3)) and returns a substring from
 *   the string 's'. The substring begins at index 'start' and is of maximum
 *   size 'len'.
 *
 *   Parameter:
 *   The parameter 's' is the string from which to create the substring,
 *   'start' corresponds to the start index of the substring in the string
 *   's' and 'len' to the maximum length of the substring.
 *
 *   Return values:
 *   The substring or NULL if the allocation fails.
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			j;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
