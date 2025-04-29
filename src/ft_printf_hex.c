/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:06:33 by jaeklee           #+#    #+#             */
/*   Updated: 2025/04/28 18:35:18 by jaeklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hex_len(unsigned int num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 16;
    }
    return (len);
}

void ft_put_hex(unsigned int num, const char scale)
{
    if (num >= 16)
    {
        ft_put_hex(num / 16, scale);
        ft_put_hex(num % 16, scale);
    }
    else
    {
        if(num <= 9)
            ft_putchar_fd(num + '0', 1);
        else
        {
            if (scale == 'x')
                ft_putchar_fd((num - 10 + 'a'), 1);
            if (scale == 'X')
                ft_putchar_fd((num - 10 + 'A'), 1);
        }
    }
}

int ft_print_hex(unsigned int num, const char scale)
{
    if (num == 0)
        return (write(1, "0", 1));
    else
        ft_put_hex(num, scale);
    return (ft_hex_len(num));
}