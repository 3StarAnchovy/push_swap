/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:19:01 by jihong            #+#    #+#             */
/*   Updated: 2022/08/02 03:34:49 by jihong           ###   ########.fr       */
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

int	ft_atoll(char *str)
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
		|| result > 2147483647 || result < -2147483648)
		print_error(1);
	return ((int)result);
}

int	get_split_str_size(char **temp)
{
	int	i;

	i = 0;
	while (temp[i])
		i ++;
	return (i);
}

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i ++;
	}
	free(str);
}

int	get_str_size(int argc, char *argv[])
{
	int		i;
	int		j;
	int		size;
	char	**temp;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!check_space(argv[i][j]))
				break ;
			j ++;
		}
		if (argv[i][j] == '\0')
			print_error(1);
		temp = ft_split(argv[i], ' ');
		size += get_split_str_size(temp);
		free_str(temp);
		i ++;
	}
	return (size);
}
