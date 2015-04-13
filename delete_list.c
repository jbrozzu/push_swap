/*
HEADER
*/

#include "push_swap.h"

int     list_remove_first(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head;
        if (p_list->list_length ==0)
            return(1);
        if (p_list->list_length ==1)
        {
           p_list->p_head = NULL;
           p_list->p_tail = NULL;
        }
        else if (p_temp->p_prev == NULL)
        {
            p_list->p_head = p_temp->p_next;
            p_list->p_head->p_prev = NULL;
        }
        free(p_temp);
        p_list->list_length--;
    }
    return(0);
} 

int     list_remove_last(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        if (p_list->list_length ==0)
            return(1);
        if (p_list->list_length ==1)
        {
           p_list->p_head = NULL;
           p_list->p_tail = NULL;
        }
        else if (p_temp->p_next == NULL)
        {
            p_list->p_tail = p_temp->p_prev;
            p_list->p_tail->p_next = NULL;
        }
        free(p_temp);
        p_list->list_length--;
    }    
    return(0);
}