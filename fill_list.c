/*
HEADER
*/

#include "push_swap.h"

t_list	*fill_list(int argc, char **argv)
{
	t_list *p_list_a;
	int i;

	i = 1;
	p_list_a = (list_new("A"));
	while (i < argc)
	{
		list_append(p_list_a, ft_atoi(argv[i]));
		i++;
	}
	return (p_list_a);
}