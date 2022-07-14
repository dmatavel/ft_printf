/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:11:44 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/14 19:41:27 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_eval_format(va_list args, const char format);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_pointer(unsigned long n);
int	ft_print_int(int n);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_lower_hex(unsigned int n);
int	ft_print_upper_hex(unsigned int n);

#endif
