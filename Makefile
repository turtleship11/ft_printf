# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 11:30:19 by jaeklee           #+#    #+#              #
#    Updated: 2025/04/30 11:55:58 by jaeklee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# complie /include 
CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I include
SRCDIR = src

# library name
NAME = ft_printf.a
LIBFT_DIR=libft
LIBFT=$(LIBFT_DIR)/libft.a

# all files
SRCS= $(addprefix src/, ft_printf_hex.c ft_printf_ptr.c ft_printf_unsigned.c ft_printf_u.c \
		ft_printf.c)

# .o file
OBJS = $(SRCS:.c=.o)

#  make libft.a
all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 
	
$(NAME): $(LIBFT) $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# file del
clean:
	rm -f $(OBJS)

# del inc Lib
fclean: clean
	rm -f $(NAME)

# re build
re: fclean all


test:	main.c $(NAME) $(LIBFT)
		$(CC) -o $@ $(CFLAGS) main.c $(NAME) $(LIBFT) -lbsd
