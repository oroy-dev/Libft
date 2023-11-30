# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 10:43:51 by oroy              #+#    #+#              #
#    Updated: 2023/11/30 14:02:47 by oroy             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	libft.a

OBJ_DIR	:=	obj
SRC_DIR	:=	src

SRC		:=	$(SRC_DIR)/ft_abs.c \
			$(SRC_DIR)/ft_atoi.c \
			$(SRC_DIR)/ft_bzero.c \
			$(SRC_DIR)/ft_calloc.c \
			$(SRC_DIR)/ft_isalnum.c \
			$(SRC_DIR)/ft_isalpha.c \
			$(SRC_DIR)/ft_isascii.c \
			$(SRC_DIR)/ft_isdigit.c \
			$(SRC_DIR)/ft_isprint.c \
			$(SRC_DIR)/ft_itoa.c \
			$(SRC_DIR)/ft_memchr.c \
			$(SRC_DIR)/ft_memcmp.c \
			$(SRC_DIR)/ft_memcpy.c \
			$(SRC_DIR)/ft_memmove.c \
			$(SRC_DIR)/ft_memset.c \
			$(SRC_DIR)/ft_putchar_fd.c \
			$(SRC_DIR)/ft_putendl_fd.c \
			$(SRC_DIR)/ft_putnbr_fd.c \
			$(SRC_DIR)/ft_putstr_fd.c \
			$(SRC_DIR)/ft_split.c \
			$(SRC_DIR)/ft_strchr.c \
			$(SRC_DIR)/ft_strdup.c \
			$(SRC_DIR)/ft_striteri.c \
			$(SRC_DIR)/ft_strjoin.c \
			$(SRC_DIR)/ft_strlcat.c \
			$(SRC_DIR)/ft_strlcpy.c \
			$(SRC_DIR)/ft_strlen.c \
			$(SRC_DIR)/ft_strmapi.c \
			$(SRC_DIR)/ft_strncmp.c \
			$(SRC_DIR)/ft_strnstr.c \
			$(SRC_DIR)/ft_strrchr.c \
			$(SRC_DIR)/ft_strtrim.c \
			$(SRC_DIR)/ft_substr.c \
			$(SRC_DIR)/ft_tolower.c \
			$(SRC_DIR)/ft_toupper.c \

SRC_LST	:=	$(SRC_DIR)/ft_lstadd_back.c \
			$(SRC_DIR)/ft_lstadd_front.c \
			$(SRC_DIR)/ft_lstclear.c \
			$(SRC_DIR)/ft_lstdelone.c \
			$(SRC_DIR)/ft_lstiter.c \
			$(SRC_DIR)/ft_lstlast.c \
			$(SRC_DIR)/ft_lstmap.c \
			$(SRC_DIR)/ft_lstnew.c \
			$(SRC_DIR)/ft_lstsize.c \

SRC_PTF	:=	$(SRC_DIR)/ft_printf.c \
			$(SRC_DIR)/ft_printf_types.c \

SRC_GNL	:=	$(SRC_DIR)/get_next_line.c \
			$(SRC_DIR)/get_next_line_utils.c \

OBJ		:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
OBJ_LST	:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_LST))
OBJ_PTF	:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_PTF))
OBJ_GNL	:=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_GNL))

AR		:=	ar rcs
CC 		:=	gcc
CFLAGS	:=	-Wall -Werror -Wextra
RM		:=	rm -rf

COLOR_GREEN	:= \033[0;32m
COLOR_RED	:= \033[0;31m
COLOR_BLUE	:= \033[0;34m
COLOR_END	:= \033[0m

# ********************************** RULES *********************************** #

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) $(OBJ_LST) $(OBJ_PTF) $(OBJ_GNL)
	@$(AR) $(NAME) $(OBJ) $(OBJ_LST) $(OBJ_PTF) $(OBJ_GNL)
	@echo "-> libft: $(COLOR_GREEN)$(NAME) created$(COLOR_END) \033[K"

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)
	
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c $(CFLAGS) $< -o $@
	@echo "-> libft:$(COLOR_RED)$(patsubst $(OBJ_DIR)/%, %, $@)$(COLOR_END) \033[K\r\c"

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
