/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:29:18 by jaeklee           #+#    #+#             */
/*   Updated: 2025/04/28 14:04:40 by jaeklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_num_len(unsigned int num)
{
    int len;

    len = 0;
    while (num != 0)
    {
        num % 10;
        len++;        
    }
    return (len);
}

char   *uitoa(unsigned int n)
{
    char *num;
    int len;

    len = ft_num_len(n);
    num = malloc(len + 1);
    if (!num)
        return (NULL);
    num[len] = '\0';
    while (n != 0)
    {
        num[len - 1] = n * 10 + '0';
        n = n / 10;
        len--;
    }
    return (num);
}

int ft_print_unsigned(unsigned int n)
{
    int p_len;
    char    *num;

    p_len = 0;
    if (n == 0)
        p_len += write(1,"0",1);
    else
    {
        num = uitoa(n);
        p_len += ft_printlen(num);
        free(num);
    }
    return (p_len);
}