# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 14:05:35 by yismaili          #+#    #+#              #
#    Updated: 2022/09/22 14:16:24 by yismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonecontacts
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =   PhoneBook.cpp contact.cpp main.cpp 
HDR = Contact.hpp PhoneBook.hpp
OBJS = $(SRCS:.cpp=.o)

BGreen=\033[1;32m
BYellow=\033[1;33m
BBlue=\033[1;34m
BPurple=\033[1;38;5;205m
BRed=\033[1;31m
 
all : $(NAME)
	
%.o: %.cpp $(HDR)
	@echo "$(BPurple) Compile $(BYellow) $^ $(BGreen)to $@"
	@$(CC) $(CFLAGS) -c -o $@ $<

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