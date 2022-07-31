/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:30:36 by jihong            #+#    #+#             */
/*   Updated: 2022/07/31 18:17:04 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	covnert_str_to_arr(int *arr, int *arr_i, char **str)
{
	int	value;
	int	i;

	i = 0;
	while (str[i])
	{
		value = ft_atoll((str[i]));
		arr[*arr_i] = value;
		(*arr_i)++;
		i ++;
	}
}

int	*parse_argv(int argc, char *argv[], int size)
{
	int		argc_i;
	int		result_i;
	int		*result;
	char	**split_str;

	argc_i = 1;
	result_i = 0;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		print_error(1);
	while (argc_i < argc)
	{
		split_str = ft_split(argv[argc_i], ' ');
		covnert_str_to_arr(result, &result_i, split_str);
		free_str(split_str);
		argc_i ++;
	}
	result[result_i] = '\0';
	return (result);
}

void	is_sort_valid(int *arr, int size, int i)
{
	int	arr_i;
	int	sort_cnt;
	int	temp;

	sort_cnt = 0;
	while (i < size)
	{
		arr_i = 0;
		while (arr_i < size - 1)
		{
			if (arr[arr_i] > arr[arr_i + 1])
			{
				temp = arr[arr_i];
				arr[arr_i] = arr[arr_i + 1];
				arr[arr_i + 1] = temp;
				sort_cnt ++;
			}
			arr_i ++;
		}
		if (arr[i] == arr[i + 1])
			print_error(1);
		i ++;
	}
	if (sort_cnt == 0)
		print_error(-1);
}
