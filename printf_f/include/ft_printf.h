/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:15:55 by jaeklee           #+#    #+#             */
/*   Updated: 2025/04/28 15:09:37 by jaeklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include "libft.h"
#include <stdint.h>

int		ft_printchar(int c);
int		ft_printlen(char *str);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);

#endif
