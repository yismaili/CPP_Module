# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/17 12:18:48 by yismaili          #+#    #+#              #
#    Updated: 2022/09/22 17:37:41 by yismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

BGreen=\033[1;32m
BYellow=\033[1;33m
BBlue=\033[1;34m
BPurple=\033[1;38;5;205m
BRed=\033[1;31m
 
all : $(NAME)
	
%.o: %.c
	@echo "$(BPurple) Compile $(BYellow) $^ $(BGreen)to $@"
	@$(CC) $(CFLAGS) -c

$(NAME): $(OBJS)
	@echo "$(BYellow) Make $(BGreen) $@"
	@$(CC) -o $@ $^

clean:
	@echo "$(BBlue) Clean"
	@rm -rf $(OBJS)

fclean: clean
	@echo "$(BGreen) Fclean"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re