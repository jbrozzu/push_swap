/*
HEADER
*/

#include "push_swap.h"

int list_displayBT (t_list *p_list)  /* Affichage des ÈlÈments du BOTTOM (NULL) vers TOP   */ 
{
    if (1)
    {
        if (ft_strcmp(p_list->list_name, "A") == 0)
            ft_putstr("\n A : ");
        else
            ft_putstr("\n B : ");
    }
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        while (p_temp != NULL)
        {
            ft_putchar(' ');
            ft_putnbr(p_temp->data);
            ft_putchar(' ');
            p_temp = p_temp->p_prev;
        }
    }
    return(0);
}

int list_displayBTglobal(int trace, t_list *p_list1, t_list *p_list2)  /* Affichage des éléments du BOTTOM (NULL) vers TOP des deux piles avec un éventuel commentaire  */ 
{
    if (trace == 0)
        return (0); 
	else
	{
		if (ft_strcmp(p_list1->list_name, "A") == 0)
		{
			list_displayBT (p_list1);
			list_displayBT (p_list2);
		}
		else
		{
			list_displayBT (p_list2);
			list_displayBT (p_list1);
		}
        ft_putstr("\n\n");
	}	
	return (0);
}

int return_Top_moins_1(t_list *p_list)  /* Retour Elt TOP */ 
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head->p_next;
        return(p_temp->data);
    } 
    else 
    	return(-1);
} 


int return_Top(t_list *p_list)  /* Retour Elt TOP */ 
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head;
        return(p_temp->data);
    } 
    else 
    	return(-1);
} 

int return_Tail_plus_1(t_list *p_list)  /* Retour Elt TAIL */ 
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail->p_prev;
        return(p_temp->data);
    } 
    else 
        return(-1);
}

int return_Tail(t_list *p_list)  /* Retour Elt TAIL */ 
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        return(p_temp->data);
    } 
    else 
        return(-1);
}