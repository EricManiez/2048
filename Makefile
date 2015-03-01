
.PHONY: all, $(NAME), clean, fclean, re, norme
SRC_PATH = ./src/

SRC_NAME = main.c \
		   gen_grid.c \
		   random_square.c \
		   draw_board.c \
		   populate_board.c \
		   arrow_mgmt.c \
		   left.c \
		   right.c \
		   up.c \
		   down.c \
		   victory.c \
		   check_loss.c \
		   biggest_value.c \

OBJ_PATH = ./obj/
INC_PATH = ./includes/

LIB_PATH = ./libft/
LIB_NAME = libft.a

NAME = game_2048

CC = gcc
CFLAGS = -Werror -Wall -Wextra
CMLX =  
NCURSES = -lncurses

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
LIB = $(addprefix $(LIB_PATH), $(LIB_NAME))
INC = ./includes/$(NAME).h

all: $(NAME)

$(NAME) : $(OBJ)	
	@make -C $(LIB_PATH)
	@$(CC) $(CFLAGS) $(CMLX) $(LIB) $(NCURSES) -o $(NAME) $(OBJ) 
	@echo "$(NAME) : executable file compiled successfully"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(INC)
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -I$(INC_PATH) -I$(LIB_PATH)/includes -o $@ -c $<

clean:
	@make -C $(LIB_PATH) clean
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || echo '' > /dev/null
	@echo "$(NAME) : object files deleted successfully"

fclean: clean
	@rm -f $(LIB)
	@echo "$(LIB_NAME) : library file deleted succesfully"
	@rm -f $(NAME)
	@echo "$(NAME) : executable file deleted successfully"

re: fclean all

norme_$(NAME):
	@norminette $(SRC)
	@norminette $(INC_PATH)*.h

norme_lib:
	@make -C $(LIB_PATH) norme
