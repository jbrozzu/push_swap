/*
HEADER
*/

#include "push_swap.h"

void reverserotate(t_list *p_list1, t_list *p_list2, int trace)
{ 
	int top_1;
	
	if (ft_strcmp(p_list1->list_name, "A") == 0)
		ft_putstr("\e[1;37mrra\e[0;32m");
	else
		ft_putstr("\e[1;37mrrb\e[0;32m");
	top_1 = return_Tail(p_list1);
	list_remove_last(p_list1);
	list_prepend(p_list1, top_1);  
	list_displayBTglobal(trace, p_list1, p_list2);

}

void rotate(t_list *p_list1, t_list *p_list2, int trace)
{ 
	int top_1;

	if (ft_strcmp(p_list1->list_name, "A") == 0)
		ft_putstr("\e[1;37mra\e[0;32m");
	else
		ft_putstr("\e[1;37mrb\e[0;32m");
	top_1 = return_Top(p_list1);
	list_remove_first(p_list1);
	list_append(p_list1, top_1);  
	list_displayBTglobal(trace, p_list1, p_list2);
}

int swap(t_list *p_list1, t_list *p_list2, int trace)
{ 
	int top_1;
	int top_2;

	if (ft_strcmp(p_list1->list_name, "A") == 0)
		ft_putstr("\e[1;37msa\e[0;32m");
	else
		ft_putstr("\e[1;37msb\e[0;32m");
	top_1 = return_Top(p_list1);
	list_remove_first(p_list1);
	top_2 = return_Top(p_list1);
	list_remove_first(p_list1);
	list_prepend(p_list1, top_1);  
	list_prepend(p_list1, top_2);
	list_displayBTglobal(trace, p_list1, p_list2);
	return (0);
}

int test_head(t_list *p_list1)
{	
	if (p_list1->list_length < 2)
		return(-1);
	if (p_list1->p_head->data > p_list1->p_head->p_next->data)
		return (1);
	else
		return (0);
}

void Top_Top(t_list *p_list1, t_list *p_list2, int trace)
{ 
	int top_1;
	if (ft_strcmp(p_list1->list_name, "A") == 0)
		ft_putstr("\e[1;37mpb\e[0;32m");
	else
		ft_putstr("\e[1;37mpa\e[0;32m");
	top_1 = return_Top(p_list1);
	list_remove_first(p_list1);
	list_prepend(p_list2, top_1);  
	list_displayBTglobal(trace, p_list1, p_list2);
}