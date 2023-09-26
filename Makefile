# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malhamel <malhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/19 14:28:04 by malhamel          #+#    #+#              #
#    Updated: 2023/07/05 14:31:51 by malhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm	-rf
LIBFT	=	libft/libft.a
SRCS 	=	push_swap.c	\
			check.c		\
			swap.c		\
			push.c		\
			rotate.c	\
			reverse.c	\
			lst_utilis.c \
			lst_utilis2.c \
			sort.c		 \
			ps_utils.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY = all clean fclean re