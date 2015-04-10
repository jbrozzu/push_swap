/*
HEADER
*/

#include "push_swap.h"

int return_Top_moins_1(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head->p_next;
        return (p_temp->data);
    } 
    else 
    	return (-1);
} 


int return_Top(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head;
        return (p_temp->data);
    } 
    else 
    	return (-1);
} 

int return_Tail_plus_1(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail->p_prev;
        return (p_temp->data);
    } 
    else 
        return (-1);
}

int return_Tail(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        return (p_temp->data);
    } 
    else 
        return (-1);
}