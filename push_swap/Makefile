# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arochd <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/19 20:59:33 by arochd            #+#    #+#              #
#    Updated: 2025/12/29 17:45:28 by arochd           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRC = srcs/push_swap.c                           \
      srcs/libft_utils/libft_utils_2.c            \
      srcs/libft_utils/libft_utils.c               \
      srcs/operations/operations_utils.c            \
      srcs/operations/push_ops.c                     \
      srcs/operations/rotate_ops.c                    \
      srcs/operations/rrr.c                            \
      srcs/operations/swap_ops.c                        \
      srcs/parsing/parse_args.c                          \
      srcs/sorting/sort_small.c                           \
      srcs/sorting/sort_utils.c                            \
      srcs/stacks/stack_utils.c                             \
      srcs/stacks/stack_init.c                               \
      srcs/sorting/indexing.c                                 \
      srcs/sorting/chunk_sort.c                                \
      srcs/sorting/chunk_utils.c

SRC_BONUS = bonus_srcs/operations_bonus/operations_utils_bonus.c  \
            bonus_srcs/operations_bonus/push_ops_bonus.c           \
            bonus_srcs/operations_bonus/rotate_ops_bonus.c          \
            bonus_srcs/operations_bonus/rrr_bonus.c                  \
            bonus_srcs/operations_bonus/swap_ops_bonus.c              \
            bonus_srcs/parsing_bonus/parse_args.c                      \
            bonus_srcs/checker_utils.c                                  \
            bonus_srcs/checker.c                                         \
            bonus_srcs/get_next_line_utils.c                              \
            bonus_srcs/get_next_line.c                                     \
            srcs/stacks/stack_init.c                                        \
            srcs/libft_utils/libft_utils.c                                   \
            srcs/stacks/stack_utils.c                                         \
            srcs/operations/push_ops.c                                         \
            srcs/operations/swap_ops.c                                          \
            srcs/operations/rotate_ops.c                                         \
            srcs/operations/rrr.c                                                 \

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

NAME = push_swap
BONUS_NAME = checker

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(OBJ_BONUS)
	$(CC) $(CFLAGS) $(OBJ_BONUS) -o $(BONUS_NAME)

%.o: %.c includes/push_swap.h includes/get_next_line.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all
