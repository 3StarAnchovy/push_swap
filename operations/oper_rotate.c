/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:04:43 by jihong            #+#    #+#             */
/*   Updated: 2022/07/28 19:23:27 by jihong           ###   ########.fr       */
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
