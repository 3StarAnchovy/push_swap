/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:10:23 by jihong            #+#    #+#             */
/*   Updated: 2022/07/31 02:34:11 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_info *info)
{
	int	temp;

	if (info -> size_a < 2)
		return ;
	temp = info->top_a->content;
	info->top_a->content = info->top_a->next->content;
	info->top_a->next->content = temp;
	write(1, "sa\n", 3);
}

void	sb(t_info *info)
{
	int	temp;

	if (info -> size_b < 2)
		return ;
	temp = info->top_b->content;
	info->top_b->content = info->top_b->next->content;
	info->top_b->next->content = temp;
	write(1, "sb\n", 3);
}

void	ss(t_info *info)
{
	int	temp;

	if (info -> size_a < 2)
		return ;
	temp = info->top_a->content;
	info->top_a->content = info->top_a->next->content;
	info->top_a->next->content = temp;
	if (info -> size_b < 2)
		return ;
	temp = info->top_b->content;
	info->top_b->content = info->top_b->next->content;
	info->top_b->next->content = temp;
	write(1, "ss\n", 3);
}
