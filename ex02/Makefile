# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 07:15:31 by jbadaire          #+#    #+#              #
#    Updated: 2024/04/22 07:15:31 by jbadaire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FRAGTRAP
RM = @rm -rf
CC = @c++
DIR = @mkdir -p
PRINT = @echo

FILES = ClapTrap/ClapTrap	\
		ScavTrap/ScavTrap	\
		FragTrap/FragTrap	\
		main

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -MD

OBJS = $(addsuffix .o, $(addprefix .Objects/, $(FILES)))
DPDS = $(addsuffix .d, $(addprefix .Objects/, $(FILES)))

$(NAME): $(OBJS)
	$(PRINT) "Making $(NAME)..."
	$(CC) $(OBJS) -o $(NAME)
	$(PRINT) "$(NAME) done."

.Objects/%.o: ./%.cpp Makefile
	$(DIR) .Objects/ClapTrap .Objects/ScavTrap .Objects/FragTrap
	$(PRINT) "Compiling $<$(_END)..."
	$(CC) -c $(CFLAGS) $< -o $@

all: $(NAME)

clean:
	$(PRINT) "Cleaning Objects..."
	$(RM) $(OBJS)
	$(PRINT) "Objects cleaned."

fclean:
	$(PRINT) "Cleaning Objects..."
	$(RM) $(OBJS)
	$(PRINT) "Deleting Objects directory..."
	$(RM) .Objects
	$(PRINT) "Deleting $(NAME)..."
	$(RM) $(NAME)
	$(PRINT) "Objects cleaned."
	$(PRINT) "Objects directory deleted."
	$(PRINT) "$(NAME) deleted."

re: fclean all

.PHONY: all clean fclean re

-include $(OBJS:.o=.d)