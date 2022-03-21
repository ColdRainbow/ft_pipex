NAME = pipex 

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

DIR_H := include/
H = pipex.h
H := $(addprefix $(DIR_H), $(H))

DIR_SRC = src/
SRC =	main_pipex.c \
		utils.c \
		extra.c
SRC := $(addprefix $(DIR_SRC), $(SRC))

DIR_OBJ = obj/
OBJ = $(SRC:%.c=%.o)
OBJ := $(patsubst $(DIR_SRC)%, $(DIR_OBJ)%, $(OBJ))

DIR_LIB := libft/
DIR_LIB_H := $(addprefix $(DIR_LIB), include/)
LIB := $(addprefix $(DIR_LIB), libft.a)

all: subsystem $(DIR_OBJ) $(NAME)

subsystem:
	@$(MAKE) -sC $(DIR_LIB)

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

$(NAME): $(OBJ)
	@$(CC) $(CCFLAGS) $(OBJ) -o $(NAME) $(LIB)
	@echo "--------------------------------"
	@echo "${NAME} compiled"
	@echo "--------------------------------"

$(DIR_OBJ)%.o: $(DIR_SRC)%.c $(LIB) $(H) Makefile
	@echo "[$<] ---> [$@]"
	@$(CC) $(CCFLAGS) -I$(DIR_LIB_H) -I$(DIR_H) -c $< -o $@

clean:
	@rm -rf $(DIR_OBJ)
	@$(MAKE) -sC $(DIR_LIB) clean

fclean: clean
	@rm -rf $(NAME)
	@$(MAKE) -sC $(DIR_LIB) fclean

re: fclean all

.PHONY: subsystem clean fclean re