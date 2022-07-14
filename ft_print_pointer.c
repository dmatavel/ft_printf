/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:46:26 by dmatavel          #+#    #+#             */
/*   Updated: 2022/07/14 18:44:18 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_putnbr_hex_fd(unsigned long n, int fd)
{
    char *radix;

    radix = "0123456789abcdef";
   if (fd < 0)
        return ;
    if (n >= 16)
        ft_putnbr_hex_fd(n / 16, fd);
    if (n > 10)
        ft_putchar_fd(radix[n % 16], fd);
    else
        ft_putchar_fd(radix[n % 16], fd);
}

int ft_print_pointer(unsigned long n)
{
    int ret;
    unsigned long digit;

    ret = 0;
    digit = n;
    if (digit == 0)
        ret++;
    while (digit != 0)
    {
        digit /= 16;
        ret++;
    }
    ft_putstr_fd("0x", 1);
	ft_putnbr_hex_fd(n, 1);
    return (ret + 2);
}
