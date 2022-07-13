/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:11:44 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/13 12:44:23 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int ft_eval_format(va_list args, const char format);
int ft_print_char(char c);
int	ft_print_str(char *);
int	ft_print_int(int n);
int	ft_print_unsigned_int(unsigned int n);
#endif
