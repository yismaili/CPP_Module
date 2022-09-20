# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 15:54:02 by yismaili          #+#    #+#              #
#    Updated: 2022/09/20 16:45:22 by yismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =  PhoneBook.cpp Contact.cpp main.cpp 

HDR = Contact.hpp PhoneBook.hpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@c++ $(FLAGS) $^ -o $@
	@echo All set

%.o: %.cpp $(HDR)
	@c++ $(FLAGS) -c -o $@ $<
	@echo Compiling....

clean :
	@rm -f $(OBJ)
	@echo Cleaning....

fclean : clean
	@rm -f $(NAME)
	@echo It\'s all clean

re : fclean all

.PHONY : all clean fclean re
