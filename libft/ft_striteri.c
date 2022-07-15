/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 08:02:41 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/15 16:58:41 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *   Description:
 *   ft_striteri applies the function ’f’ on each character of the string
 *   passed as argument, passing its index as first argument. Each character
 *   is passed by address to 'f' to be modified if necessary.
 * 
 *   Parameters:
 *   's' is the string on which to iterate;
 *   'f' is the function to apply to each character.
 *
 *   Return values:
 *   None.
 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
