/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihong <jihong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:43:58 by jihong            #+#    #+#             */
/*   Updated: 2022/07/26 17:39:04 by jihong           ###   ########.fr       */
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
	if(argc < 2)
		print_error(-1);
}
