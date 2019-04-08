# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: agiordan <agiordan@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 17:31:01 by agiordan     #+#   ##    ##    #+#        #
#    Updated: 2019/04/08 18:45:58 by agiordan    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRCS_PATH = 	srcs
SRCS_FILES =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_addline.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstaddback.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_nbrlen.c \
		ft_memrcpy.c \
		ft_lstlen.c \
		ft_newlist.c \
		ft_sorttab.c \
		ft_swapint.c \
		ft_swapchar.c \
		ft_addint.c \
		ft_addinttab.c \
		ft_sqrt.c \
		get_next_line.c \
		ft_strfill.c \
		ft_filltabint.c \
		ft_atoi_base.c \
		ft_tablen.c \
		ft_tabnew.c \
		ft_tabdel.c \
		ft_tab2del.c \
		ft_tabcpy.c \
		ft_tabdup.c \
		ft_printtab.c \
		ft_printtabl.c \
		ft_tabintdel.c \
		ft_tabint2del.c \
		ft_abs.c \
		ft_isspace.c \
		ft_strreplace.c \
		ft_filereplace.c \
		ft_stristr.c \
		ft_putinttab.c \
		ft_countnumbers.c \
		ft_catinttab.c \
		ft_bintodec.c \
		ft_dectobin.c
SRCS = $(addprefix $(SRCS_PATH)/, $(SRCS_FILES))

OBJS_PATH = objs
OBJS_FILES = $(SRCS_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_PATH)/, $(OBJS_FILES))

INCLUDES_PATH = include
FLAGS = -Werror -Wextra -Wall -I./$(INCLUDES_PATH)
CC = gcc

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

$(OBJS_PATH)/%.o : $(SRCS_PATH)/%.c
			@mkdir $(OBJS_PATH) 2> /dev/null || true
			$(CC) $(FLAGS) -c $< -o $@

clean:
			rm -rf $(OBJS_PATH)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

norme:
			@norminette $(SRCS_PATH)
			@norminette $(INCLUDES_PATH)
