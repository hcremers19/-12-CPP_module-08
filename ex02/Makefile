# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcremers <hcremers@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 15:13:21 by hcremers          #+#    #+#              #
#    Updated: 2022/10/07 15:13:31 by hcremers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ex02

FLAGS =	-Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \

# ----- #

all:		$(NAME)

$(NAME):
			c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
			rm -rf $(NAME)

re:			clean all