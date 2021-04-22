# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrs <rrs@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/16 18:04:41 by bswarm            #+#    #+#              #
#    Updated: 2021/04/20 11:53:16 by rrs              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c
OBJ = *.o
CFLAGS = -Wall -Wextra -Werror -c

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc $(CFLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

