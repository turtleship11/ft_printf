# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 11:30:19 by jaeklee           #+#    #+#              #
#    Updated: 2025/05/21 17:05:16 by jaeklee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -g -Wall -Wextra -Werror 
SRCDIR = src

# library name
NAME = libftprintf.a

# all files
SRCS=  ft_printf_hex.c ft_printf_ptr.c ft_printf_un.c \
		ft_printf_utils.c ft_printf.c ft_printf_nbr.c\

# .o file
OBJS = $(SRCS:.c=.o)

.SECONDARY: $(OBJS)

#  make libft.a
all: $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@ 
	
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# file del
clean:
	rm -f $(OBJS)

# del inc Lib
fclean: clean
	rm -f $(NAME)

# re build
re: fclean all


test:	main.c $(NAME)
		$(CC) -o $@ $(CFLAGS) main.c $(NAME)  
