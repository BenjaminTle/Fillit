# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tplessis <tplessis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/08 04:38:21 by tplessis          #+#    #+#              #
#    Updated: 2018/12/22 01:24:08 by thplessi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = clang
INC_PATH = includes
SRC_PATH = srcs
OBJ_PATH = objs
LIBS_NAME = libft
SRC_NAME = fllt_box_init.c\
	fllt_box_resize.c\
	fllt_detect_shape.c\
	fllt_error_handler.c\
	fllt_find_next_case.c\
	fllt_find_next_sharp.c\
	fllt_find_next_tm.c\
	fllt_is_placeable.c\
	fllt_main.c\
	fllt_place.c\
	fllt_pos_inc.c\
	fllt_readfile.c\
	fllt_resolve.c\
	fllt_rm_tm.c
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
LIBS = $(foreach LIB, $(LIBS_NAME), $(LIB)/$(LIB).a)
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I $(INC_PATH) $(addprefix -I ,$(addsuffix /$(INC_PATH),$(LIBS_NAME)))
CLFLAGS = $(addprefix -L ,$(LIBS_NAME)) $(addprefix -,$(subst ib,,$(LIBS_NAME)))

.PHONY: re all norme clean fclean

all: $(NAME)

$(NAME): $(OBJ) | $(LIBS)
	@printf "\e[32;4m[Linking]:\e[0m %s\n" $@
	@$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJ) -o $(NAME) $(CLFLAGS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(LIBS):
	@printf "\e[34;4m[Making]:\e[0m %s\n" $(patsubst %/,%,$(dir $@))
	@make -C $(dir $@) all

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean:
	@printf "\e[35;4m[Cleaning]:\e[0m\n"
	@rm -fv $(OBJ)
	@rm -rf $(OBJ_PATH)
	@$(foreach LIB, $(LIBS_NAME), make -C $(LIB) clean;)

fclean: clean
	@printf "\e[31;4m[Cleaning]:\e[0m\n"
	@rm -fv $(NAME)
	@$(foreach LIB, $(LIBS), rm -f $(LIB);)

re: fclean all

norme:
	@printf "\e[31m"
	@norminette $(SRC) | grep -Eiw -B1 "Warning|Error" || true
	@norminette $(INC_PATH) | grep -Eiw -B1 "Warning|Error" || true
	@printf "\e[0m\n"
	$(foreach LIB, $(LIBS_NAME), make -C $(LIB) norme;)
