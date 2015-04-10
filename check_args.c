/*
HEADER
*/

#include "push_swap.h"

int		test_args_nb(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		test_size(char **argv)
{
	int i;
	long nb;

	i = 1;
	while (argv[i])
	{
		if ((nb = ft_atoi(argv[i])) > 2147483647 || nb < (-2147483648))
			return(0);
//		printf("ARGS = %d \n", ft_atoi(argv[i]));
		i++;
	}
	return (1);
}

int 	test_recurence(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (argc - 1))
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		check_args(int argc, char **argv)
{
	if (test_args_nb(argv) == 0)
	{
		ft_putstr("ERROR : \n");
		ft_putstr("Only integer numbers, no character, no float.\n");
		return (0);
	}
	if (test_size(argv) == 0)
	{
		ft_putstr("ERROR : \n");
		ft_putstr("Only integer (between -2147483648 and 2147483647).\n");
		return (0);
	}
	if (test_recurence(argc, argv) == 0)
	{
		ft_putstr("ERROR : \n");
		ft_putstr("No recurrence allowed.\n");
		return (0);
	}
	return (1);
}