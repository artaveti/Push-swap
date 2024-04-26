NAME = push_swap
BONUS = checker
ARCHIVEFILE_NAME = push_swap.a
ARCHIVEFILE_BONUS = checker.a
ARCHIVEFILE_LIBFT = libft.a
HEADER_NAME = lib_for_pushswap.h
HEADER_BONUS = lib_for_checker.h
SOURCE_NAME = push_swap.c
SOURCES =   ft_join_argv.c ft_lstnew_num.c ft_lstiter_printf.c\
			ft_atoi_for_pushswap.c ft_error_check_in_atoi.c\
			ft_error_check_space_null.c ft_argv_quant_check.c ft_arr_len.c\
			ft_lstadd_back_for_a.c ft_lstadd_back_for_pushswap.c\
			ft_lstadd_front_for_pushswap.c ft_lst_penultimate.c\
			ft_lstlast_for_pushswap.c ft_longlong_atoi_for_pushswap.c\
			ft_error_check_duplic.c ft_lstsize_for_pushswap.c ft_sa.c ft_sb.c ft_ss.c\
			ft_pa.c ft_pb.c ft_ra.c ft_rb.c ft_rr.c ft_rra.c ft_rrb.c ft_rrr.c\
			ft_find_position_of_smallest.c ft_find_position_of_biggest.c\
			ft_ra_rra_pb_smallest.c ft_for_less_or_equal_3.c ft_for_less_or_equal_5.c\
			ft_butterfly.c ft_arr_sort.c ft_pa_rb_rrb_of_b_in_butterfly.c\
			ft_find_n.c ft_is_ascending.c ft_create_arr_for_butterfly.c ft_error_check_is_num_int.c\
			ft_error_check_is_num_zero.c ft_pb_rb_in_butterfly.c
SOURCE_BONUS = checker.c
SOURCES_BONUS =	get_next_line.c ft_gstrchr.c ft_gstrlen.c\
			ft_if_function_do_it_two_letters.c ft_if_function_do_it_three_letters.c\
			ft_ra_for_checker.c ft_rb_for_checker.c\
			ft_rr_for_checker.c ft_rra_for_checker.c ft_rrb_for_checker.c\
			ft_rrr_for_checker.c ft_sa_for_checker.c ft_sb_for_checker.c\
			ft_ss_for_checker.c ft_pa_for_checker.c ft_pb_for_checker.c\
			ft_is_ascending_for_checker.c ft_check_is_list_b_empty.c ft_functions_print_for_checker.c
OBJ_NAME = $(SOURCE_NAME:.c=.o)
OBJS = $(SOURCES:.c=.o)
OBJ_BONUS = $(SOURCE_BONUS:.c=.o)
OBJS_BONUS = $(SOURCES_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror # -g -fsanitize=address
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(ARCHIVEFILE_NAME) $(ARCHIVEFILE_LIBFT) $(OBJ_NAME)
	$(CC) $(CFLAGS) $(ARCHIVEFILE_NAME) $(ARCHIVEFILE_LIBFT) $(OBJ_NAME) -o $(NAME)

$(ARCHIVEFILE_NAME): $(OBJS) $(HEADER_NAME)
	$(AR) $(ARCHIVEFILE_NAME) $(OBJS)

$(ARCHIVEFILE_LIBFT): 
	make bonus -C ./libft
	cp libft/libft.a $(ARCHIVEFILE_LIBFT)

%.o: %.c $(HEADER_NAME) $(HEADER_BONUS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C ./libft
	$(RM) $(OBJ_NAME) $(OBJ_BONUS) $(OBJS) $(OBJS_BONUS) $(ARCHIVEFILE_NAME) $(ARCHIVEFILE_LIBFT)

fclean: clean
	make fclean -C ./libft
	$(RM) $(NAME) $(BONUS)
	
re: fclean all

bonus: $(BONUS)
$(BONUS): $(ARCHIVEFILE_NAME) $(ARCHIVEFILE_LIBFT) $(OBJ_BONUS) $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(ARCHIVEFILE_NAME) $(ARCHIVEFILE_LIBFT) $(OBJ_BONUS) $(OBJS_BONUS) -o $(BONUS)

.PHONY: all clean fclean re bonus
