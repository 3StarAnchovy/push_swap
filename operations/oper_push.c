/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:21:30 by jihong            #+#    #+#             */
/*   Updated: 2022/07/28 19:25:30 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_info *info)
{
	t_stack	*temp;

	if (info->size_b < 1)
		return ;
	temp = info->top_b;
	if (info -> size_b > 1)
	{
		info -> top_b = info -> top_b -> next;
		info -> top_b ->prev = NULL;
	}
	if (info -> size_a == 0)
	{
		temp -> next = NULL;
		info -> top_a -> prev = temp;
		info -> bottom_a = temp;
	}
	else
	{
		temp -> next = info -> top_a;
		info -> top_a ->prev = temp;
		info -> top_a = temp;
	}
	info -> size_a += 1;
	info -> size_b -= 1;
	write(1, "pa\n", 3);
}

void	pb(t_info *info)
{
	t_stack *temp;

	if (info->size_a < 1)
		return 1;
	temp = info -> top_a;
	if (info -> size_a > 1)
	{
		info -> top_a = info -> top_a ->next;
		info -> top_a -> prev = NULL;
	}
	if (info -> size_b == 0)
	{
		temp -> next == NULL;
		info -> top_b = temp;
		info -> bottom_b = temp;
	}
	else
	{
		temp -> next = info -> top_b;
		info -> top_b -> prev = temp;
		info -> top_b = temp;
	}
	info -> size_a -= 1;
	info -> size_b += 1;
	write(1, "pb\n", 3);
}
