/*
HEADER
*/

#include "push_swap.h"

void	tool2(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (*nbr != 0 && trace == 0)
		ft_putchar(' ');
	Top_Top (p_list_b, p_list_a, trace);
	if (*nbr != 0 && trace == 0)
		ft_putchar(' ');
	swap(p_list_a, p_list_b, trace);
	*nbr += 2;
	while ((return_Top(p_list_a) > return_Tail(p_list_a)))
	{
		ft_putchar(' ');
		reverserotate (p_list_a, p_list_b, trace);
		*nbr += 1;
	}
	if (list_trie_a(p_list_a) == 1) 
	{
		ft_putchar(' ');
		Top_Top (p_list_a, p_list_b, trace);
		*nbr += 1;
	}
}

void	tool3(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (return_Top(p_list_a) > return_Top_moins_1(p_list_a))
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		swap(p_list_a, p_list_b, trace);
		*nbr += 1;
	}
	while ((return_Top(p_list_a) > return_Tail(p_list_a)))
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		reverserotate (p_list_a, p_list_b, trace);
		*nbr += 1;
	}
}

void	tool4(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (return_Tail(p_list_a) < return_Tail_plus_1(p_list_a))
		while ((return_Top(p_list_a) > return_Tail(p_list_a))) 
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			reverserotate(p_list_a, p_list_b, trace);
			*nbr += 1;
		}
	else
		while ((return_Top(p_list_a) > return_Tail(p_list_a))) 
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			rotate(p_list_a, p_list_b, trace);
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

void	tool5(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (return_Tail(p_list_a) < return_Tail_plus_1(p_list_a))
		while ((return_Top(p_list_a) > return_Tail(p_list_a))) 
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			reverserotate(p_list_a, p_list_b, trace);
			*nbr += 1;
		}
	else
		while ((return_Top(p_list_a) > return_Tail(p_list_a))) 
		{
			if (*nbr != 0 && trace == 0)
				ft_putchar(' ');
			rotate(p_list_a, p_list_b, trace);
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

void	tool6(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr)
{
	if (return_Top(p_list_b) < return_Top_moins_1(p_list_b)) 
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		swap(p_list_b, p_list_a, trace);
		*nbr += 1;
	}
	while ((return_Top (p_list_b) < return_Tail (p_list_b)))   
	{
		if (*nbr != 0 && trace == 0)
			ft_putchar(' ');
		reverserotate(p_list_b, p_list_a, trace);
		*nbr += 1;
	}
}