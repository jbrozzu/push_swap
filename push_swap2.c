/*
HEADER - 
*/

#include "push_swap.h"

int		push_swap2(t_list *p_list_a, int trace, int *nbr)
{
	t_list *p_list_b;
	p_list_b = list_new("B");
	if (trace == 1)
		ft_putstr("START : ");
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
			tool_global_4(p_list_a, p_list_b, trace, nbr);
			tool_global_5(p_list_a, p_list_b, trace, nbr);
		}
	}
}

void	tool7(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	while ((return_Top (p_list_a) > return_Tail (p_list_a))) 
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		rotate (p_list_a, p_list_b, trace);
		*nbr += 1;
	}
	if (return_Top(p_list_a) > return_Top_moins_1(p_list_a)) 
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		swap(p_list_a, p_list_b, trace);
		*nbr += 1;
	}
}

void	tool8(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	while ((return_Top (p_list_b) < return_Tail (p_list_b)))   
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		rotate (p_list_b, p_list_a, trace);
		*nbr += 1;
	}
	if (return_Top(p_list_b) < return_Top_moins_1(p_list_b)) 
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		swap(p_list_b, p_list_a, trace);
		*nbr += 1;
	}
}

void	tool_global_4(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	while (list_trie_a(p_list_a) == 1)
	{
		if ( (return_Top(p_list_a) > return_Top_moins_1(p_list_a)) &&
			 (return_Top_moins_1(p_list_a) > return_Tail(p_list_a))	)			
			tool3(p_list_a, p_list_b, trace, nbr);
		else
			tool7(p_list_a, p_list_b, trace, nbr);
		if (list_trie_a(p_list_a) == 1)   
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			Top_Top (p_list_a, p_list_b, trace);
			*nbr += 1;		
		}
	}
}

void	tool_global_5(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (list_trie_b(p_list_b) == 1)
	{
		if ((return_Top (p_list_b) < return_Tail (p_list_b)) &&  
		     (return_Top_moins_1(p_list_b) > return_Tail(p_list_b))) 
			tool8(p_list_a, p_list_b, trace, nbr);
		else
		{
			tool6(p_list_a, p_list_b, trace, nbr);
		}
		if (list_trie_b(p_list_b) == 1)  
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			Top_Top (p_list_b, p_list_a, trace);
			*nbr += 1;
		}
	}
}