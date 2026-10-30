# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvilela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/30 15:23:12 by pvilela           #+#    #+#              #
#    Updated: 2026/10/30 15:33:30 by pvilela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_display_file
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS_DIR	= srcs
SRCS		= srcs/main.c srcs/util.c
OBJS_DIR	= $(SRCS_DIR)
OBJS		= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
RM		= rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
