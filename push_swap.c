/*
HEADER
*/

#include "push_swap.h"

int	push_swap(t_list *p_list_a, int trace, int *nbr)
{
	t_list *p_list_b;
	p_list_b = list_new("B");
	if (trace == 1)
	{
		ft_putchar('\n');
		ft_putstr("\e[1;36mSTART \e[1;33m");
	}
	list_displayBTglobal(trace, p_list_a, p_list_b);
	while (1)
	{   
		if ((list_trie_a(p_list_a) == 0) && (list_trie_b(p_list_b) == 0))
		{ 
			if (tool_global_1(p_list_a, p_list_b, trace, nbr) == 0)
				return (0);
		}   
		else 
		{
			tool_global_2(p_list_a, p_list_b, trace, nbr);
			tool_global_3(p_list_a, p_list_b, trace, nbr);
		}
	}
}

int		tool_global_1(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (p_list_a->list_length == 0 || p_list_b->list_length == 0)
	{
		tool1(p_list_a, p_list_b, trace, nbr);
		return 0;
	}
	else if (return_Top (p_list_a) > return_Top (p_list_b)) 
	{   
		tool1(p_list_a, p_list_b, trace, nbr);
		return 0;
	}
	else
	{
		tool2(p_list_a, p_list_b, trace, nbr);
		return (1);
	}
}

void	tool_global_2(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	while (list_trie_a(p_list_a) == 1)
	{
		if ( (return_Top(p_list_a) > return_Top_moins_1(p_list_a)) &&
			 (return_Top_moins_1(p_list_a) > return_Tail(p_list_a))	)			
			tool3(p_list_a, p_list_b, trace, nbr);
		else
			tool4(p_list_a, p_list_b, trace, nbr);
		if (list_trie_a(p_list_a) == 1) 
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			Top_Top (p_list_a, p_list_b, trace);
			*nbr += 1;
		}  				
	}
}

void	tool_global_3(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (list_trie_b(p_list_b) == 1)
	{
		if ( (return_Top(p_list_b) < return_Tail(p_list_b)) &&  
		     (return_Top_moins_1(p_list_b) > return_Tail(p_list_b))) 
			tool5(p_list_a, p_list_b, trace, nbr);
		else
			tool6(p_list_a, p_list_b, trace, nbr);
		if (list_trie_b(p_list_b) == 1)  
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			Top_Top (p_list_b, p_list_a, trace);
			*nbr += 1;
		}
	}
}

int		tool1(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	while (p_list_b->list_length > 0)
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		Top_Top(p_list_b, p_list_a, trace);
		*nbr += 1;
	}
	if (trace == 1)
		ft_putstr("\e[1;36mEND \e[1;33m");
	list_displayBTglobal(trace, p_list_a, p_list_b);
	if (trace == 1)
	{
		ft_putstr("\e[1;31mTOTAL MOVES : ");
		ft_putnbr(*nbr);
		ft_putchar('\n');
	}

	return 0;
}