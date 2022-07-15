/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:48:45 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/21 01:26:57 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
char ft_test_mapi(unsigned int i, char c)
{
	i = 0;
	while (i++ < 10)
	{
		printf("%d\n", i);
		ft_putchar_fd(c, 1);
	}
	return (0);	
}

int main(void)
{

	ft_strmapi("Hello, world", ft_test_mapi);
	return (0);
}
*/
