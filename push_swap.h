/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:44:17 by jihong            #+#    #+#             */
/*   Updated: 2022/07/29 18:48:46 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> // 제발지워

typedef struct s_stack
{
	struct s_stack *prev;
	int content;
	struct s_stack *next;
}			t_stack;

typedef struct s_info
{
	int	*array;
	int size_a;
	int	size_b;
	struct s_stack *top_a;
	struct s_stack *top_b;
	struct s_stack *bottom_a;
	struct s_stack *bottom_b;
}			t_info;

int		print_error(int flag);
int		ft_atoll(char *str);
void	free_str(char **str);

t_stack	*init_stack(void);
t_info	*init_info(void);
int		get_str_size(int argc, char *argv[]);
int		*parse_argv(int argc, char *argv[], int size);
void	set_stack(t_info *info, int *arr, int size);
void	is_sort_valid(int *arr, int size, int i);
void	sa(t_info *info);
void	sb(t_info *info);
void	ss(t_info *info);
void	pa(t_info *info);
void	pb(t_info *info);
void	ra(t_info *info);
void	rb(t_info *info);
void	rr(t_info *info);
void	rra(t_info *info);
void	rrb(t_info *info);
void	rrr(t_info *info);
