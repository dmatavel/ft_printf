/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:11:44 by dmatavel          #+#    #+#             */
/*   Updated: 2022/06/29 14:32:03 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* includes */
#include "libft/libft.h"
#include <stdarg.h>

/* type definitions */

typedef struct s_print
{
	va_list	args;
	int		tl;
	int		perc;
}	t_print;

/* declarations */

int			ft_printf(const char *format, ...);
int			ft_eval_format(t_print *tab, const char *format, int index);
void		ft_print_char(t_print *tab);
void		ft_print_str(t_print *tab);
void		ft_print_int(t_print *tab);

#endif
