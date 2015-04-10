/*
HEADER
*/

#include "push_swap.h"

int list_trie_a (t_list *p_list)
{
    int tampon;
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        while (p_temp != NULL)
        {
            tampon = p_temp->data;
            p_temp = p_temp->p_prev;
            if (p_temp != NULL)
            {
              if (tampon <  p_temp->data) 
                return (1);
            }
        }
        return(0);
    } 
    else 
        return(-1);
} 

int list_trie_b (t_list *p_list)
{
    int tampon;
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        while (p_temp != NULL)
        {
            tampon = p_temp->data;
            p_temp = p_temp->p_prev;
            if (p_temp != NULL)
            {
              if (tampon >  p_temp->data) 
                return (1);
            }
        }
        return(0);
    } 
    else 
        return(-1);
} 
