# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeklee <jaeklee@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/22 11:30:19 by jaeklee           #+#    #+#              #
#    Updated: 2025/04/28 14:10:11 by jaeklee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# include 
CC = cc
CFLAGS = -Wall -Wextra -Werror -I include

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	   ft_memmove.c ft_memset.c ft_strdup.c ft_strchr.c ft_strlcat.c \
	   ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	   ft_tolower.c ft_toupper.c ft_calloc.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c \
	   ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# order to make
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

