/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:44:17 by jihong            #+#    #+#             */
/*   Updated: 2022/07/26 18:15:59 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "unistd.h"
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
	struct s_stack top_a;
	struct s_stack top_b;
	struct s_stack bottom_a;
	struct s_stack bottom_b;
}			t_info;

int	print_error(int flag);