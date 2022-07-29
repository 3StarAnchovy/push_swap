/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:43:58 by jihong            #+#    #+#             */
/*   Updated: 2022/07/29 18:51:21 by jihong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_error(int flag)
{
	if (flag > 0)
		write(2, "Error\n", 7);
	exit(1);
	return (-1);
}

int	main(int argc, char *argv[])
{
	int		arr_size;
	int		*input_arr;
	t_info	*info;

	arr_size = 0;
	if(argc < 2)
		print_error(-1);
	info = init_info();
	arr_size = get_str_size(argc, argv);
	input_arr = parse_argv(argc, argv, arr_size);
	set_stack(info, input_arr, arr_size);
	is_sort_valid(input_arr, arr_size, 0);
	printf("%d  %d", info -> top_a -> content, info -> bottom_a -> content);
	//printf("%d", arr_size);
	//input_arr = parse_argv()
}
