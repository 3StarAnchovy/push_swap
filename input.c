/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:19:01 by jihong            #+#    #+#             */
/*   Updated: 2022/07/26 18:37:46 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int ft_atoll(char *str)
{
	long long	result;
	int			flag;
	int			checker;

	flag = 1;
	result = 0;
	checker = 0;
	while (check_space(*str))
		str ++;
	if (*str == '-')
		flag = -1;
	if (*str == '+' || *str == '-')
		str ++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str ++;
		checker ++;
	}
	result *= flag;
	if (*str != '\0' || checker > 10
		|| result > 2147483647 || result < -214748364)
		print_error(1);
	return ((int)result);
}
