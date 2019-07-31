# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhou <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 19:56:54 by mzhou             #+#    #+#              #
#    Updated: 2019/07/28 20:10:37 by mzhou            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = *.c

HEADER = ft.h

all:
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

clean:
	@/bin/rm -f *.gch *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
