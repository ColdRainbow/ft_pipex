.PHONY: clean fclean re

NAME = libft.a
CC = clang
CCFLAGS = -Wall -Wextra -Werror

DIR_H := include/
H = libft.h
H := $(addprefix $(DIR_H), $(H))

DIR_SRC = src/
SRC = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_calloc.c \
	   ft_realloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   \
	   ft_free_arr.c \
	   ft_memdel.c \
	   ft_strsplit.c \
	   ft_strsub.c 
SRC := $(addprefix $(DIR_SRC), $(SRC))

DIR_OBJ = obj/
OBJ = $(SRC:%.c=%.o)
OBJ := $(patsubst $(DIR_SRC)%, $(DIR_OBJ)%, $(OBJ))

all: $(DIR_OBJ) $(NAME)

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	@echo "--------------------------------"
	@echo "${NAME} compiled"
	@echo "--------------------------------"

$(DIR_OBJ)%.o: $(DIR_SRC)%.c $(H) Makefile
	@echo "[$<] ---> [$@]"
	@$(CC) $(CCFLAGS) -I$(DIR_H) -c $< -o $@

clean:
	@rm -rf $(DIR_OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
