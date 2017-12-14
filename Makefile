#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gboudrie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/13 12:06:11 by gboudrie          #+#    #+#              #
#    Updated: 2017/12/13 12:29:30 by gboudrie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =		libftprintf.a

CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

INCLUDES =	includes/

SOURCES =	src/

LIBS =		lib/



all :		

$(NAME) :	

exec :		

norm :		

clean :		

fclean :	clean
			-rm -f $(NAME)

re :		fclean all