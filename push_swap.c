/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 15:11:42 by jbrozzu           #+#    #+#             */
/*   Updated: 2015/03/27 18:32:20 by jbrozzu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int		test_args_nb(int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (argv[j])
		{
			k = 0;
			while (argv[j][k])
			{
				if (ft_isdigit(argv[j][k]) == 0)
					return (0);
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		check_args(int argc, char **argv)
{
	if (test_args_nb(argc, argv) == 0)
		return (0);
	if (test_size(argc, argv) == 0)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		if (check_args(argc, argv) == 0)
			ft_putstr("ERROR\n");
	}
	else
		ft_putchar('\n');
	return (0);
}

