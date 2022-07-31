/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:48:33 by jihong            #+#    #+#             */
/*   Updated: 2022/07/31 19:52:07 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_a_location(int value, t_info *info)
{
	int	result;

	if (value < get_stack_min(info->top_a))
		result = set_a_location_min(info);
	else if (value > get_stack_max(info->top_a))
		result = set_a_location_max(info);
	else
		result = set_a_location_mid(value, info);
	return (result);
}

int	get_bigger(int a, int b, int a_loc, int b_loc)
{
	if (a < 0)
		a = a * -1;
	if (b < 0)
		b = b * -1;
	if (a_loc < 0)
		a_loc = a_loc * -1;
	if (b_loc < 0)
		b_loc = b_loc * -1;
	if (a + b > a_loc + b_loc)
		return (1);
	else
		return (0);
}

void	get_min_rotate(t_info *info, int *a, int *b)
{
	int			a_location;
	int			b_location;
	int			index;
	t_stack		*stack_b;
	int			num;

	index = 0;
	stack_b = info->top_b;
	while (index < info->size_b)
	{
		num = stack_b->content;
		a_location = set_a_location(num, info);
		if (index >= (info->size_b + 1) / 2)
			b_location = (info->size_b - index) * -1;
		else
			b_location = index;
		if (index == 0 || get_bigger(*a, *b, a_location, b_location))
		{
			*a = a_location;
			*b = b_location;
		}
		stack_b = stack_b->next;
		index++;
	}
}
