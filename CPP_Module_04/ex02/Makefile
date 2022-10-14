# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 13:58:36 by yismaili          #+#    #+#              #
#    Updated: 2022/10/11 19:37:34 by yismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Brain
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =    main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp  Brain.cpp
HDR =  Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp  Brain.hpp
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