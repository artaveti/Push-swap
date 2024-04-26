/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_for_pushswap.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:35:22 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/02 17:33:31 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FOR_PUSHSWAP_H
# define LIB_FOR_PUSHSWAP_H

# include <unistd.h> // read(); write();
# include <stdlib.h> // malloc(); free(); exit();
# include "Libft/libft.h"

typedef struct int_list
{
	int				content;
	struct int_list	*next;
}	t_num_list;

typedef struct s_list_for_butterfly
{
	int			*ordered;
	int			n;
	int			i;
	int			counter;
}	t_list_for_butterfly;

char		*ft_join_argv(int argc, char *argv[]);
t_num_list	*ft_lstnew_num(int content);
void		ft_lstiter_printf(t_num_list	*list,	int (f)(const char *, ...));
int			ft_atoi_for_pushswap(const char	*str);
void		ft_error_check_in_atoi(char **splitted_str);
void		ft_error_check_space_null(int argc, char *argv[]);
void		ft_argv_quant_check(int argc);
int			ft_arr_len(char **arr);
void		ft_lstadd_back_for_a(t_num_list **a, char **splitted_str);
void		ft_lstadd_back_for_pushswap(t_num_list **list,
				t_num_list *new_list);
void		ft_lstadd_front_for_pushswap(t_num_list	**list,
				t_num_list	*new_list);
t_num_list	*ft_lstlast_for_pushswap(t_num_list	*list);
t_num_list	*ft_lst_penultimate(t_num_list *list);
long long	ft_longlong_atoi_for_pushswap(const char	*str);
void		ft_error_check_duplic(char **splitted_str);
int			ft_lstsize_for_pushswap(t_num_list *list);
void		ft_sa(t_num_list *a);
void		ft_sb(t_num_list *b);
void		ft_ss(t_num_list *a, t_num_list *b);
void		ft_pa(t_num_list **a, t_num_list **b);
void		ft_pb(t_num_list **a, t_num_list **b);
void		ft_rb(t_num_list **b);
void		ft_ra(t_num_list **a);
void		ft_rr(t_num_list **a, t_num_list **b);
void		ft_rra(t_num_list **a);
void		ft_rrb(t_num_list **b);
void		ft_rrr(t_num_list **a, t_num_list **b);
void		ft_for_less_or_equal_3(t_num_list **a);
void		ft_for_less_or_equal_5(int splitted_str_len,
				t_num_list **a, t_num_list **b);
int			ft_find_position_of_smallest(t_num_list **list);
int			ft_find_position_of_biggest(t_num_list **list);
void		ft_ra_rra_pb_smallest(t_num_list **a, t_num_list **b);
void		ft_butterfly(t_num_list **a, t_num_list **b);
void		ft_arr_sort(int *arr, t_num_list **a);
void		ft_pa_rb_rrb_of_b_in_butterfly(t_num_list **a, t_num_list **b);
int			ft_find_n(t_num_list **a);
void		ft_is_ascending(t_num_list **a);
int			*ft_create_arr_for_butterfly(t_num_list **a);
void		ft_error_check_is_num_int(char *str);
void		ft_error_check_is_num_zero(char *str);
void		ft_pb_rb_in_butterfly(int *counter, t_num_list **a, t_num_list **b);

#endif
