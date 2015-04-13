/*
HEADER
*/

#include "push_swap.h"

int		instruction(int argc, char **argv, int trace, int *nbr, int x)
{
	t_list p_list_a;

	if (check_args(argc - (trace + x), argv + (trace + x)) == 0)
		return (1);
	p_list_a = *fill_list(argc - (trace + x), argv + (trace + x));
	if (list_trie_a(&p_list_a) == 0)
	{
		ft_putstr("The list is already sorted.\n");
		return (1);
	}
	if (argc < 8 + trace)
		push_swap(&p_list_a, trace, nbr);
	else
		push_swap2(&p_list_a, trace, nbr);
	ft_putchar('\n');
	return (0);
}

void	help(void)
{
	ft_putstr("\e[1;35m\nusage: ./push_swap [args] [-h] [-v args] [-x args]\n\n");
	ft_putstr("-h : get help with the different flags available\n");
	ft_putstr("-v : 'verbose' display the different steps during the sorting\n");
	ft_putstr("-x : display the number of moves with the standard display\n\n");
	ft_putstr("The arguments have to be integers, at least two of them.\n");
	ft_putstr("Example : ./push_swap 2 1 3 6 5 8\n\n");
}

int flags(char **argv, int *trace, int *x)
{
	if (ft_strcmp(argv[1], "-v") == 0)
		*trace = 1;
	if (ft_strcmp(argv[1], "-h") == 0)
	{
		help();
		return (1);
	}
	if (ft_strcmp(argv[1], "-x") == 0)
		*x = 1;
	return (0);
}

void	less_args(int argc, char **argv)
{
	if (argc == 2 && test_args_nb(argv) == 1)
		ft_putstr("The list is already sorted.\n");
	else
		help();
}

int		main(int argc, char **argv)
{
	int trace;
	int nbr;
	int x;

	trace = 0;
	nbr = 0;
	x = 0;
	if (flags(argv, &trace, &x) == 1)
		return (0);
	if (argc - (trace + x) > 2)
	{
		if (instruction(argc, argv, trace, &nbr, x) == 1)
			return (0);
		if (x == 1)
		{
			ft_putstr("\e[1;31m\n    TOTAL MOVES : ");
			ft_putnbr(nbr);
			ft_putstr("\n\n");
		}
	}
	else
		less_args(argc - (trace + x), argv + (trace + x));
	return (0);
}