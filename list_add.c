/*
HEADER
*/

#include "push_swap.h"

t_list	*list_new(char *listname)
{
    t_list *p_new = malloc(sizeof *p_new);
    if (p_new != NULL)
    {
        p_new->list_name   = listname ;
        p_new->list_length = 0;
        p_new->p_head = NULL;
        p_new->p_tail = NULL;
    }
    return p_new;
} 

t_list	*list_append(t_list *p_list, int data)
{
    if (p_list != NULL)
    {
        t_node *p_new = malloc(sizeof *p_new);
        if (p_new != NULL)
        {
            p_new->data = data;
            p_new->p_next = NULL;
            if (p_list->p_tail == NULL)
            {
                p_new->p_prev = NULL;
                p_list->p_head = p_new;
                p_list->p_tail = p_new;
            }
            else
            {
                p_list->p_tail->p_next = p_new;
                p_new->p_prev = p_list->p_tail;
                p_list->p_tail = p_new;
            }
            p_list->list_length++;
        }
    }
    return p_list;
} 

t_list *list_prepend(t_list *p_list, int data)
{
    if (p_list != NULL)
    {
        t_node *p_new = malloc(sizeof *p_new);
        if (p_new != NULL)
        {
            p_new->data = data;
            p_new->p_prev = NULL;
            if (p_list->p_tail == NULL)
            {
                p_new->p_next = NULL;
                p_list->p_head = p_new;
                p_list->p_tail = p_new;
            }
            else
            {
                p_list->p_head->p_prev = p_new;
                p_new->p_next = p_list->p_head;
                p_list->p_head = p_new;
            }
            p_list->list_length++;
       }
    }
    return p_list;
} 

size_t list_length(t_list *p_list)
{
    size_t ret = 0;
    if (p_list != NULL)
    {
        ret = p_list->list_length;
    }
    return ret;
} 