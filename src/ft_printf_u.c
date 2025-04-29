/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:49:35 by jaeklee           #+#    #+#             */
/*   Updated: 2025/04/29 12:06:21 by jaeklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}

//PRINT total print len
int     ft_printstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr("(NULL)");
        return (6);
    }
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
    return (i);
}
//  print nbr len
int     ft_printnbr(int n)
{
    int len;
    char    *num;

    len = 0;
    num = ft_itoa(n);
    len = ft_printstr(num);
    free(num);
    return (len);
}

int ft_printpercent(void)
{
    write(1, "%", 1);
    return (1);
}