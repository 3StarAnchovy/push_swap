/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:10:11 by jihong            #+#    #+#             */
/*   Updated: 2022/07/29 15:20:37 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_info *info)
{
	t_stack	*temp;

	if (info -> size_a < 2)
		return ;
	temp = info -> bottom_a;
	info -> bottom_a = info -> bottom_a -> prev;
	info -> bottom_a -> next = NULL;
	info -> top_a -> prev = temp;
	temp -> next = info -> top_a;
	info -> top_a = temp;
	info -> top_a -> prev = NULL;
	write(1, "rra\n", 4);
}

void	rra(t_info *info)
{
	t_stack	*temp;

	if (info -> size_b < 2)
		return ;
	temp = info -> bottom_b;
	info -> bottom_b = info -> bottom_b -> prev;
	info -> bottom_b -> next = NULL;
	info -> top_b -> prev = temp;
	temp -> next = info -> top_b;
	info -> top_b = temp;
	info -> top_b -> prev = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_info *info)
{
	t_stack	*temp;

	if (info -> size_a < 2 || info -> size_b < 2)
		return ;
	temp = info -> bottom_a;
	info -> bottom_a = info -> bottom_a -> prev;
	info -> bottom_a -> next = NULL;
	info -> top_a -> prev = temp;
	temp -> next = info -> top_a;
	info -> top_a = temp;
	info -> top_a -> prev = NULL;
	temp = info -> bottom_b;
	info -> bottom_b = info -> bottom_b -> prev;
	info -> bottom_b -> next = NULL;
	info -> top_b -> prev = temp;
	temp -> next = info -> top_b;
	info -> top_b = temp;
	info -> top_b -> prev = NULL;
	write(1, "rrr\n", 5);
}
