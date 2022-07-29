/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:59:34 by jihong            #+#    #+#             */
/*   Updated: 2022/07/29 18:39:03 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*result;

	result = NULL;
	result = (t_stack *)malloc(sizeof(t_stack));
	result -> prev = NULL;
	result -> content = 0;
	result -> next = NULL;
	return (result);
}

t_info	*init_info(void)
{
	t_stack	*a;
	t_info	*result;

	result = NULL;
	result = (t_info *)malloc(sizeof(t_info));
	a = init_stack();
	result -> top_a = a;
	result -> bottom_a = a;
	result -> top_b = NULL;
	result -> bottom_b = NULL;
	result -> array = NULL;
	result -> size_a = 0;
	result -> size_b = 0;
	return (result);
}

void	set_stack(t_info *info, int *arr, int size)
{
	t_stack	*new;
	int		i;

	i = 0;
	while (i < size)
	{
		new = init_stack();
		info -> size_a += 1;
		info -> bottom_a->content = (int)arr[i];
		info -> bottom_a -> next = new;
		new -> prev = info -> bottom_a;
		info -> bottom_a = new;
		i ++;
	}
	info -> bottom_a = info -> bottom_a -> prev;
	free(new);
}
