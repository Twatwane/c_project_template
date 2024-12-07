# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 03:56:05 by ajosse            #+#    #+#              #
#    Updated: 2024/12/07 03:56:22 by ajosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = <YOUR PROGRAM NAME>
RESSOURCES = libressources.a

PROJECT_FILES = <YOUR PROJECT FILES ex: main.c>
PROJECT_OBJS = $(PROJECT_FILES:%.c=%.o)

PROJECT_FILES_path = $(PROJECT_FILES:%=project/srcs/%)
PROJECT_OBJS_path = $(PROJECT_OBJS:%=project/objs/%)

NB_COMPILED = 0
TOTAL_FILES := $(shell echo $(words $(PROJECT_FILES))| bc)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

project_done:
	@ echo -n "\r"
	@ echo    "project : compiling c files . . . $(TOTAL_FILES)/$(TOTAL_FILES)       ✅"
	@ echo -n "- $(NB_COMPILED) files updated -\n\n"

$(NAME): $(RESSOURCES) $(PROJECT_OBJS_path) project_done
	@ echo -n "compiling" $(NAME)...
	@ $(CC) $(CFLAGS) $(PROJECT_OBJS_path) -L. -lressources -lmlx -lX11 -lXext -lm -Ifdf_includes -Iressources/includes -g3 -o $(NAME)
	@ echo "              ✔"

$(RESSOURCES): minilibx
	@ echo ""
	@ echo -n "compiling" $(RESSOURCES)... 
	@ echo ""
	@ echo ""
	@ make -s -C ressources/libft
	@ cp ressources/libft/libft.a $(RESSOURCES)
	@ echo -n "compiled " $(RESSOURCES)... 
	@ echo "  ✔\n"

minilibx:
	@ echo -n "compiling MiniLibX..."
	@ make -s -C ressources/minilibx-linux > makefile_logs.txt 2>&1
	@ echo -n "         ✔"
	@ cp ressources/minilibx-linux/libmlx.a .
	@ echo ""

project/objs/%.o: project/srcs/%.c
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ $(eval NB_COMPILED=$(shell echo $(NB_COMPILED) + 1 | bc))  # Augmente le compteur
	@ echo -n "\r"
	@ echo -n "project : compiling c files . . . $(NB_COMPILED)/$(TOTAL_FILES)"

clean:
	@ rm -f $(PROJECT_OBJS_path)
	@ make clean -s -C ressources/libft
	@ make clean -s -C ressources/minilibx-linux > makefile_logs.txt 2>&1
	@ echo "project : OBJs cleaned"
	@ echo ""

fclean: clean
	@ rm -f $(RESSOURCES)
	@ echo $(RESSOURCES) "binary cleaned"

	@ rm -f $(NAME)
	@ echo $(NAME) "binary cleaned"

	@ rm -f libmlx.a
	@ echo "libmlx.a binary cleaned"

	@ make fclean -s -C ressources/libft

	@ rm -f makefile_logs.txt
	@ echo "makefile_logs cleaned"
	
	@ echo ""

re: fclean all

.PHONY: all clean fclean re
