/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:59:18 by jihong            #+#    #+#             */
/*   Updated: 2022/07/31 00:12:05 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_min(t_stack *stack)
{
	int	min;

	min = stack -> content;
	while (stack)
	{
		if (min > stack->content)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}

int	set_a_location_min(t_info *info)
{
	int		result;
	int		min;
	int		temp;
	t_stack	*stack_a;

	result = 0;
	temp = 0;
	stack_a = info->top_a;
	min = get_stack_min(stack_a);
	while (stack_a)
	{
		temp = stack_a->content;
		if (temp == min)
			break;
		result ++;
		stack_a = stack_a->next;
	}
	if (result >= (info->size_a + 1) / 2)
		result = (info->size_a - result) * -1;
	return (result);
}

int	get_stack_max(t_stack *stack)
{
	int	max;

	max = stack->content;
	while (stack)
	{
		if (max < stack->content)
			max = stack->content;
		stack=stack->next;
	}
	return (max);
}

int	set_a_location_max(t_info *info)
{
	int		result;
	int		max;
	int		temp;
	t_stack	*stack_a;

	result = 0;
	temp = 0;
	stack_a = info->top_a;
	max = get_stack_max(stack_a);
	while (stack_a)
	{
		temp = stack_a->content;
		if (temp == max)
			break;
		result ++;
		stack_a = stack_a->next;
	}
	if (result >= (info->size_a + 1) / 2)
		result = (info->size_a - result) * -1;
	return (result);
}

int	set_a_location_mid(int num, t_info *info)
{
	t_stack	*stack_a;
	int		result;

	stack_a = info->top_a;
	result = 1;
	while (stack_a->next)
	{
		if (num > stack_a->content && num < stack_a->next->content)
			break;
		result ++;
		stack_a = stack_a->next;
	}
	if (result >= (info->size_a + 1) / 2)
		result = (info->size_a - result) * -1;
	return (result);
}
