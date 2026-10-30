# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/29 20:06:32 by pvilela           #+#    #+#              #
#    Updated: 2026/10/30 13:53:59 by pvilela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -wall -wextra -werror
ar = ar
ARFLAGS = -rcs
INCLUDES = -Includes
SRCS_DIR = srcs
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/f_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS_DIR)/%.o : $(SRCS_DIR=/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : $(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
