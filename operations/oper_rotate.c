/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:04:43 by jihong            #+#    #+#             */
/*   Updated: 2022/08/01 21:29:01 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_info *info)
{
	t_stack	*temp;

	if (info -> size_a < 2)
		return ;
	temp = info -> top_a;
	info -> top_a = info -> top_a -> next;
	info -> top_a -> prev = NULL;
	info -> bottom_a -> next = temp;
	temp -> prev = info -> bottom_a;
	info -> bottom_a = temp;
	info -> bottom_a -> next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_info *info)
{
	t_stack	*temp;

	if (info -> size_b < 2)
		return ;
	temp = info -> top_b;
	info -> top_b = info -> top_b -> next;
	info -> top_b -> prev = NULL;
	info -> bottom_b -> next = temp;
	temp -> prev = info -> bottom_b;
	info -> bottom_b = temp;
	info -> bottom_b -> next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_info *info)
{
	t_stack	*tmp;

	if (info->size_b < 2 || info->size_a < 2)
	{
		return ;
	}
	tmp = info->top_a;
	info->top_a = info->top_a->next;
	info->top_a->prev = NULL;
	info->bottom_a->next = tmp;
	tmp->prev = info->bottom_a;
	info->bottom_a = tmp;
	info->bottom_a->next = NULL;
	tmp = info->top_b;
	info->top_b = info->top_b->next;
	info->top_b->prev = NULL;
	info->bottom_b->next = tmp;
	tmp->prev = info->bottom_b;
	info->bottom_b = tmp;
	info->bottom_b->next = NULL;
	write(1, "rr\n", 3);
}
