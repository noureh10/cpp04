# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nechaara <nechaara.student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 18:10:38 by nechaara          #+#    #+#              #
#    Updated: 2024/10/17 16:29:03 by nechaara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = poly

SRCS = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))
OBJ_DIR = objects
FLAGS = -std=c++98 -Wall -Wextra -Werror -g3 -fsanitize=address
all : $(NAME)

$(NAME) : $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) created successfully !"
	@echo "use it this way : $(NAME)"


$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@c++ $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "Cleaned object files." 
fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned executable."

re: fclean all

.PHONY: all clean fclean re