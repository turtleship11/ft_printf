/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:15:55 by jaeklee           #+#    #+#             */
/*   Updated: 2025/04/30 11:12:24 by jaeklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdint.h> //intptr_t
# include <stdarg.h> // va_list

int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_hex(unsigned int num, const char scale);
int		ft_print_unsigned(unsigned int n);
int		ft_printpercent(void);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str);
#endif
