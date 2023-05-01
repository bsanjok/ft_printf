# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 15:21:52 by sbhatta           #+#    #+#              #
#    Updated: 2023/04/21 17:26:53 by sbhatta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wextra -Werror -Wall
AR = ar
CRS = crs
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
NAME = libftprintf.a

SRC = ft_printf.c ./utils/ft_print_hex.c ./utils/ft_putnbr_long.c \
		./utils/ft_printf_char.c ./utils/ft_printf_str.c ./utils/ft_printf_ptr.c \
		./utils/ft_printf_count.c ./utils/ft_printf_perc.c
OBJ = $(SRC:.c=.o)

all:$(NAME)
$(NAME): $(OBJ) $(LIBFT)
		@cp $(LIBFT) ./$(NAME)
		$(AR) $(CRS) $(NAME) $(OBJ)
$(LIBFT):
		@make all -C $(LIBFT_PATH)
%.o:%.c
		$(CC) -c $(CFLAGS) -o $@ $<
clean:
		make -C $(LIBFT_PATH) clean
		rm -f $(OBJ)
fclean: clean
		make -C $(LIBFT_PATH) fclean
		rm -f $(NAME)
re:		fclean all

.PHONY: all clean fclean re