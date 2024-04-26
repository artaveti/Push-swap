/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_for_checker.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:26:00 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:20:33 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FOR_CHECKER_H
# define LIB_FOR_CHECKER_H

# include <unistd.h> // read(); write();
# include <stdlib.h> // malloc(); free(); exit();
# include "Libft/libft.h"
# include "lib_for_pushswap.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

char	*get_next_line(int fd);
char	*ft_read_to_left_str(int fd, char *left_str);
char	*ft_get_line(char	*left_str);
char	*ft_gnl_strjoin(char	*left_str, char	*buff);
char	*ft_gstrchr(char *s, int c);
size_t	ft_gstrlen(char	*s);
void	ft_if_function_do_it_two_letters(char *name_of_ft,
			t_num_list **a, t_num_list **b);
void	ft_if_function_do_it_three_letters(char *name_of_ft,
			t_num_list **a, t_num_list **b);
void	ft_is_ascending_for_checker(t_num_list **a);
void	ft_ra_for_checker(t_num_list **a);
void	ft_rb_for_checker(t_num_list **b);
void	ft_rr_for_checker(t_num_list **a, t_num_list **b);
void	ft_rra_for_checker(t_num_list **a);
void	ft_rrb_for_checker(t_num_list **b);
void	ft_rrr_for_checker(t_num_list **a, t_num_list **b);
void	ft_sa_for_checker(t_num_list *a);
void	ft_sb_for_checker(t_num_list *b);
void	ft_ss_for_checker(t_num_list *a, t_num_list *b);
void	ft_pa_for_checker(t_num_list **a, t_num_list **b);
void	ft_pb_for_checker(t_num_list **a, t_num_list **b);
void	ft_check_is_list_b_empty(t_num_list **b);
void	ft_functions_print_for_checker(t_num_list **a, t_num_list **b);

#endif
