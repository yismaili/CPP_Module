# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 23:19:40 by yismaili          #+#    #+#              #
#    Updated: 2022/10/16 23:21:04 by yismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  Bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =    main.cpp Bureaucrat.cpp
HDR =  Bureaucrat.hpp
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