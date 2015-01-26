# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 11:21:56 by mmartin           #+#    #+#              #
#    Updated: 2015/01/23 10:45:09 by mmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include		Makefile.source

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

INC			=	-I includes

NAME		=	libft.a

OBJ_LIB		=	$(SRC_LIB:.c=.o)

HEAD		=	includes/libft.h includes/ft_struct.h

all:		$(NAME)

$(NAME):	$(OBJ_LIB)
	@echo "\033[32mar \033[33m-rc \033[36m$(NAME) $(OBJ_LIB)\033[0m"
	@ar -rc $(NAME) $(OBJ_LIB)
	@echo "\033[32mranlib \033[36m$(NAME)\033[0m"
	@ranlib $(NAME)
	@echo "\033[33mCompilation of libft.a : \033[32mSuccess\033[0m"

$(OBJ_LIB):		$(HEAD)

%.o:		%.c
	@echo "\033[32m$(CC) \033[33m$(CFLAGS) \033[36m-c $< -o $@ $(INC)\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

clean:
	@echo "\033[31mObjects of libft.a : deleted\033[0m"
	@/bin/rm -f $(OBJ_LIB)

fclean:		clean
	@echo "\033[31mlibft.a : deleted\033[0m"
	@/bin/rm -f $(NAME)

re:			fclean all

.PHONY:		all re fclean clean
