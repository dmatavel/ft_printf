/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 07:11:44 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/17 00:15:52 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# define LOWER_HEX_BASE "0123456789abcdef"
# define UPPER_HEX_BASE "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_eval_format(va_list args, const char format);
int	ft_print_char(char c);
int	ft_print_str(char *s);
int	ft_print_pointer(unsigned long n);
int	ft_print_int(int n);
int	ft_print_unsigned_int(unsigned int n);
int	ft_print_hex(unsigned int n, const char *base);

#endif
