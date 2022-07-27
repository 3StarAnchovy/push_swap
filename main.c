/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:43:58 by jihong            #+#    #+#             */
/*   Updated: 2022/07/27 17:37:22 by jihong           ###   ########.fr       */
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
	t_info	*info;

	arr_size = 0;
	if(argc < 2)
		print_error(-1);
	info = init_info();
	arr_size = get_str_size(argc, argv);
	printf("%d",arr_size);
}
