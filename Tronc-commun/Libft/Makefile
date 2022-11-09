# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omuller <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:12:38 by omuller           #+#    #+#              #
#    Updated: 2022/11/06 15:06:23 by omuller          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= $(wildcard *.c)

OBJS			= $(SRCS:.c=.o)

BONUS			= $(wildcard *.c)

BONUS_OBJS		= $(BONUS:.c=.o)

HEADER	= libft.h

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			=	libft.a

all:			$(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
