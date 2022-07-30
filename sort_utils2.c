/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:27:32 by jihong            #+#    #+#             */
/*   Updated: 2022/07/30 23:36:11 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_info *info, int *a, int *b)
{
	while (*a && *b && (*a > 0 && *b >0))
	{
		rr(info);
		*a = *a - 1;
		*b = *b - 1;
	}
	while (*a && *b && (*a < 0 && *b < 0))
	{
		rrr(info);
		*a = *a + 1;
		*b = *b + 1;
	}
}

void	rotate_a(t_info *info, int a)
{
	while (a)
	{
		if (a > 0)
		{
			ra(info);
			a --;
		}
		else
		{
			rra(info);
			a ++;
		}
	}
}

void	rotate_b(t_info *info, int b)
{
	while (b)
	{
		if (b > 0)
		{
			rb(info);
			b --;
		}
		else
		{
			rrb(info);
			b ++;
		}
	}
}
