# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/08 04:38:21 by thplessi          #+#    #+#              #
#    Updated: 2018/12/14 16:33:50 by thplessi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
INC_PATH = includes
SRC_PATH = srcs
OBJ_PATH = objs
SRC_NAME = ft_char/ft_caseeq.c\
	ft_char/ft_tolower.c\
	ft_char/ft_toupper.c\
	ft_dict/dct_eltget.c\
	ft_dict/dct_hash.c\
	ft_dict/ft_dictcpy.c\
	ft_dict/ft_dictdel.c\
	ft_dict/ft_dictfree.c\
	ft_dict/ft_dictget.c\
	ft_dict/ft_dicthas.c\
	ft_dict/ft_dictinsert.c\
	ft_dict/ft_dictkeys.c\
	ft_dict/ft_dictnew.c\
	ft_dict/ft_dictrehash.c\
	ft_dict/ft_dictresize.c\
	ft_dict/ft_dictset.c\
	ft_dict/ft_dictsnew.c\
	ft_dict/ft_dictvalues.c\
	ft_gnl/ft_gnl.c\
	ft_is/ft_isalnum.c\
	ft_is/ft_isalpha.c\
	ft_is/ft_isascii.c\
	ft_is/ft_isdigit.c\
	ft_is/ft_isgraph.c\
	ft_is/ft_islower.c\
	ft_is/ft_ispow2.c\
	ft_is/ft_isprint.c\
	ft_is/ft_isspace.c\
	ft_is/ft_isupper.c\
	ft_is/ft_isxdigit.c\
	ft_lst/ft_lstadd.c\
	ft_lst/ft_lstdel.c\
	ft_lst/ft_lstdelone.c\
	ft_lst/ft_lstiter.c\
	ft_lst/ft_lstmap.c\
	ft_lst/ft_lstnew.c\
	ft_mem/ft_bzero.c\
	ft_mem/ft_memalloc.c\
	ft_mem/ft_memccpy.c\
	ft_mem/ft_memchr.c\
	ft_mem/ft_memcmp.c\
	ft_mem/ft_memcpy.c\
	ft_mem/ft_memdel.c\
	ft_mem/ft_memmove.c\
	ft_mem/ft_memset.c\
	ft_mem/ft_memset_int.c\
	ft_mem/ft_memswap.c\
	ft_mem/ft_qsort.c\
	ft_mem/ft_revert.c\
	ft_nb/ft_abs.c\
	ft_nb/ft_atoi.c\
	ft_nb/ft_atoi_base.c\
	ft_nb/ft_bitlen.c\
	ft_nb/ft_itoa.c\
	ft_nb/ft_itoa_base.c\
	ft_nb/ft_lrot.c\
	ft_nb/ft_max.c\
	ft_nb/ft_min.c\
	ft_nb/ft_rrot.c\
	ft_nb/ft_sqrt.c\
	ft_nb/ft_swap.c\
	ft_put/ft_putchar.c\
	ft_put/ft_putchar_fd.c\
	ft_put/ft_putendl.c\
	ft_put/ft_putendl_fd.c\
	ft_put/ft_putnbr.c\
	ft_put/ft_putnbr_fd.c\
	ft_put/ft_putstr.c\
	ft_put/ft_putstr_fd.c\
	ft_put/ft_putwchar.c\
	ft_str/ft_arrjoin.c\
	ft_str/ft_match.c\
	ft_str/ft_nmatch.c\
	ft_str/ft_pathjoin.c\
	ft_str/ft_strcasestr.c\
	ft_str/ft_strcat.c\
	ft_str/ft_strchr.c\
	ft_str/ft_strclr.c\
	ft_str/ft_strcmp.c\
	ft_str/ft_strcpy.c\
	ft_str/ft_strdel.c\
	ft_str/ft_strdup.c\
	ft_str/ft_strequ.c\
	ft_str/ft_striter.c\
	ft_str/ft_striteri.c\
	ft_str/ft_strjoin.c\
	ft_str/ft_strlcat.c\
	ft_str/ft_strlcpy.c\
	ft_str/ft_strlen.c\
	ft_str/ft_strlstsplit.c\
	ft_str/ft_strmap.c\
	ft_str/ft_strmapi.c\
	ft_str/ft_strncat.c\
	ft_str/ft_strncmp.c\
	ft_str/ft_strncpy.c\
	ft_str/ft_strndup.c\
	ft_str/ft_strnequ.c\
	ft_str/ft_strnew.c\
	ft_str/ft_strnlen.c\
	ft_str/ft_strnrepl.c\
	ft_str/ft_strnrev.c\
	ft_str/ft_strnstr.c\
	ft_str/ft_strrchr.c\
	ft_str/ft_strrepl.c\
	ft_str/ft_strrev.c\
	ft_str/ft_strrot.c\
	ft_str/ft_strsplit.c\
	ft_str/ft_strstr.c\
	ft_str/ft_strsub.c\
	ft_str/ft_strtolower.c\
	ft_str/ft_strtoupper.c\
	ft_str/ft_strtrim.c\
	ft_str/ft_strxjoin.c\
	ft_time/ft_gmtime.c\
	ft_wc/ft_wclen.c\
	ft_wc/ft_wcslen.c\
	ft_wc/ft_wcsstrlen.c\
	ft_wc/ft_wctomb.c
DIRS = $(sort $(filter-out %.c,$(subst /, ,$(SRC_NAME))))
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -I $(INC_PATH)

.PHONY: re all norme clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@printf "\e[32;4m[Linking]:\e[0m %s\n" $@
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH) $(DIRS)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(DIRS):
	@$(foreach DIR,$(DIRS),mkdir -p $(OBJ_PATH)/$(DIR);)

clean:
	@printf "\e[35;4m[Cleaning]:\e[0m\n"
	@rm -fv $(OBJ)
	@rm -rf $(OBJ_PATH)

fclean: clean
	@printf "\e[31;4m[Cleaning]:\e[0m\n"
	@rm -fv $(NAME)

re: fclean all

norme:
	@printf "\e[31m"
	@norminette $(SRC) | grep -Eiw -B1 "Warning|Error" || true
	@norminette $(INC_PATH) | grep -Eiw -B1 "Warning|Error" || true
	@printf "\e[0m\n"
