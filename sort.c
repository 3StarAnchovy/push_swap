/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 23:36:53 by jihong            #+#    #+#             */
/*   Updated: 2022/07/31 00:30:03 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_for_three(t_info *info)
{
	int	top;
	int	mid;
	int	bot;

	top = info->top_a->content;
	mid = info->top_a->next->content;
	bot = info->top_a->next->next->content;
	if (top > mid && mid > bot && top > bot)
	{
		sa(info);
		rra(info);
	}
	else if (top > mid && bot > mid && top > bot)
		ra(info);
	else if(mid > top && mid > bot && bot >top)
	{
		sa(info);
		ra(info);
	}
	else if (top > mid && bot > mid && bot > top)
		sa(info);
	else if (mid > top && mid > bot && top > bot)
		rra(info);
}

void	devide_into_three_2(t_info *info, int piv1, int piv2)
{
	if (info->top_a->content < piv1)
	{
		pb(info);
		rb(info);
	}
	else if (info -> top_a -> content < piv2)
		pb(info);
	else
		ra(info);
}

void	devide_into_three(t_info *info)
{
	int	i;
	int	piv1;
	int	piv2;

	i = info -> size_a / 3;
	piv1 = info -> array[i];
	i = info -> size_a * 2 / 3;
	piv2 = info -> array[i];
	i = info -> size_a;
	while (i)
	{
		devide_into_three_2(info, piv1, piv2);
		i --;
	}
}

void	sort_for_big(t_info *info)
{
	int	a;
	int	b;

	devide_into_three(info);
	while (info -> size_a > 3)
		pb(info);
	if (info -> size_a == 2)
	{
		if (info->top_a->content > info ->top_a->next->content)
			sa(info);
	}
	if (info->size_a == 3)
		sort_for_three(info);
	while (info->size_b)
	{
		a = 0;
		b = 0;
		get_min_rotate(info, &a, &b);
		rotate_both(info, &a, &b);
		rotate_a(info, a);
		rotate_b(info, b);
		pa(info);
	}
	last_sort(info);
}

void	sort(t_info *info)
{
	if (info -> size_a == 2)
	{
		if (info->top_a->content > info->top_a->next->content)
			sa(info);
	}
	else if (info-> size_a == 3)
		sort_for_three(info);
	else
		sort_for_big(info);
}
