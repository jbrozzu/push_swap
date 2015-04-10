/*
HEADER
*/

#include "push_swap.h"

int		main(int argc, char **argv)
{
	t_list p_list_a;
	int trace;
	int nbr;

	trace = 0;
	nbr = 0;
	if (ft_strcmp(argv[1], "-v") == 0)
		trace = 1;
	if (argc - trace > 2)
	{
		if (check_args(argc - trace, argv + trace) == 0)
			return (0);
		p_list_a = *fill_list(argc - trace, argv + trace);
		if (argc < 7 + trace)
			push_swap(&p_list_a, trace, &nbr);
		else
			push_swap2(&p_list_a, trace, &nbr);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}