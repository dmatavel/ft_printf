/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 13:21:41 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/29 13:23:10 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_str(t_print *tab)
{
	char    *s;

	s = va_arg(tab->args, char *);
	ft_putstr_fd(s, 1);
	tab->tl += ft_strlen(s);
}
