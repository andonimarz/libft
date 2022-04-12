# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 10:32:01 by amarzana          #+#    #+#              #
#    Updated: 2022/04/12 11:48:08 by amarzana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c			\
	  ft_isdigit.c			\
	  ft_isalnum.c			\
	  ft_isascii.c			\
	  ft_isprint.c			\
	  ft_strlen.c			\
	  ft_strlcpy.c			\
	  ft_strlcat.c			\
	  ft_strncmp.c			\
	  ft_toupper.c			\
	  ft_tolower.c			\
	  ft_strnstr.c			\
	  ft_atoi.c				\
	  ft_strchr.c			\
	  ft_strrchr.c			\
	  ft_memset.c			\
	  ft_bzero.c			\
	  ft_memchr.c			\
	  ft_memcmp.c			\
	  ft_memcpy.c			\
	  ft_memmove.c			\
	  ft_calloc.c			\
	  ft_strdup.c			\
	  ft_substr.c			\
	  ft_strjoin.c			\
	  ft_strtrim.c			\
	  ft_itoa.c				\
	  ft_strmapi.c			\
	  ft_striteri.c			\
	  ft_putchar_fd.c		\
	  ft_putstr_fd.c		\
	  ft_putendl_fd.c		\
	  ft_putnbr_fd.c		\

SRC_BONUS = ft_lstnew.c			\

INCLUDES = libft.h

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = gcc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
RM = /bin/rm -f

all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ_BONUS) $(INCLUDES)
	$(AR) $(NAME) $(OBJ_BONUS)

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC) $(SRC_BONUS)

clean:
	$(RM) $(OBJ) $(SRC_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
