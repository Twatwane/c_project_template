# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajosse <ajosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 03:56:10 by ajosse            #+#    #+#              #
#    Updated: 2024/12/07 03:56:13 by ajosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = isalpha.c isdigit.c isalnum.c isascii.c isprint.c strlen.c memset.c bzero.c \
	memcpy.c memmove.c strlcpy.c strlcat.c toupper.c tolower.c strchr.c strrchr.c strncmp.c \
	memchr.c memcmp.c strnstr.c atoi.c calloc.c strdup.c substr.c strjoin.c strtrim.c split.c \
	itoa.c strmapi.c striteri.c putchar_fd.c putstr_fd.c putendl_fd.c putnbr_fd.c is_in.c strncpy.c \
	strstr.c strrev.c strcat.c strcpy.c lstnew_bonus.c lstadd_front_bonus.c lstsize_bonus.c \
	lstlast_bonus.c lstadd_back_bonus.c lstdelone_bonus.c lstclear_bonus.c lstiter_bonus.c \
	lstmap_bonus.c ft_printf.c utils1.c utils2.c utils3.c \
	get_next_line.c get_next_line_utils.c \

OBJS = $(FILES:%.c=%.o)

FILES_path = $(FILES:%=srcs/%)
OBJS_path = $(FILES:%.c=objs/%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NB_COMPILED = 0
TOTAL_FILES := $(shell echo $(words $(FILES)) | bc)

all: $(NAME)

done:
	@echo -n "\r"
	@echo    "libft : compiling c files . . . $(TOTAL_FILES)/$(TOTAL_FILES)       ✅"
	@echo -n "- $(NB_COMPILED) files updated -\n\n"

$(NAME): $(OBJS_path) done
	@ ar -rsc $(NAME) $(OBJS_path)

objs/%.o: srcs/%.c
	@ $(CC) $(CFLAGS) -c $< -o $@
	@ $(eval NB_COMPILED=$(shell echo $(NB_COMPILED) + 1 | bc))  # Augmente le compteur
	@ echo -n "\r"  # Efface la ligne précédente, garde le message sur la même ligne
	@ echo -n "libft : compiling c files . . . $(NB_COMPILED)/$(TOTAL_FILES)"

clean:
	@ rm -f $(OBJS_path)
	@ echo "libft : OBJs cleaned"

fclean: clean
	@ rm -f $(NAME)
	@ echo "libft : "$(NAME)" binary cleaned"

re: fclean all

.PHONY: all clean fclean re
