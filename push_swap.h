/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:44:17 by jihong            #+#    #+#             */
/*   Updated: 2022/07/28 18:21:10 by jihong           ###   ########.fr       */
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

int	print_error(int flag);

t_stack	*init_stack(void);
t_info	*init_info(void);
int		get_str_size(int argc, char *argv[]);

void	sa(t_info *info);
void	sb(t_info *info);
void	ss(t_info *info);
void	pa(t_info *info);
void	pb(t_info *info);
