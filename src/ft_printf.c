/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:36:45 by jaeklee           #+#    #+#             */
/*   Updated: 2025/04/30 11:41:51 by jaeklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

// you don't need i because i == d;
int	ft_format(va_list args, const char format)
{
	int	p_len;

	p_len = 0;
	if (format == 'c')
		p_len += ft_printchar(va_arg(args, int));
	if (format == 's')
		p_len += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		p_len += ft_print_ptr(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		p_len += ft_printnbr(va_arg(args, int));
	if (format == 'u')
		p_len += ft_print_unsigned(va_arg(args, unsigned int));
	if (format == '%')
		p_len += ft_printpercent();
	if (format == 'x' || format == 'X')
		p_len += ft_print_hex(va_arg(args, unsigned int), format);
	return (p_len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		p_len;

	i = 0;
	p_len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			p_len += ft_format(args, str[i + 1]);
			i++;
		}
		else
		{
			p_len += ft_printchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (p_len);
}
