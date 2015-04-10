/*
HEADER
*/

#include "push_swap.h"

/*  Supprimer le 1er  ÈlÈment d'une liste                    */
// #define dlist_remove_first(list) dlist_remove_id(list, 1) 
int     list_remove_first(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head;
        if (p_list->list_length ==0)
        {
            printf(" Attention : Remove_First impossible car pile vide 0\n");
            return(1);
        }    
        if (p_list->list_length ==1)  // Cas ou pile avec un seul ÈlÈment 
        {
           p_list->p_head = NULL;
           p_list->p_tail = NULL;
        }
        else if (p_temp->p_prev == NULL) // Cas pile avec plus d'un ÈlÈment
        {
            p_list->p_head = p_temp->p_next;
            p_list->p_head->p_prev = NULL;
        }
        free(p_temp);
        p_list->list_length--;
    }
    return(0);
} 

/*  Supprimer le dernier  ÈlÈment d'une liste */
// #define dlist_remove_last(list) dlist_remove_id(list, dlist_length(list)) 
int     list_remove_last(t_list *p_list)
{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_tail;
        if (p_list->list_length ==0)
        {
            printf(" Attention : Remove_Last impossible car pile vide 0\n");
            return(1);
        }    
        if (p_list->list_length ==1)  // Cas ou pile avec un seul ÈlÈment 
        {
           p_list->p_head = NULL;
           p_list->p_tail = NULL;
        }
        else if (p_temp->p_next == NULL) // Cas pile avec plus d'un ÈlÈment
        {
            p_list->p_tail = p_temp->p_prev;
            p_list->p_tail->p_next = NULL;
        }
        free(p_temp);
        p_list->list_length--;
    }    
    return(0);
} 

//t_list  *list_remove_id(t_list *p_list, int position)  /*  Supprimer un ÈlÈment selon sa position*/
/*{
    if (p_list != NULL)
    {
        t_node *p_temp = p_list->p_head;
        int i = 1;
        while (p_temp != NULL && i <= position)
        {
            if (position == i)
            {
                if (p_temp->p_next == NULL)
                {
                    p_list->p_tail = p_temp->p_prev;
                    p_list->p_tail = NULL;
                }
                else if (p_temp->p_prev == NULL)
                {
                    p_list->p_head = p_temp->p_next;
                    p_list->p_head->p_prev = NULL;
                }
                else
                {
                    p_temp->p_next->p_prev = p_temp->p_prev;
                    p_temp->p_prev->p_next = p_temp->p_next;
                }
                free(p_temp);
                p_list->list_length--;
            }
            else
            {
                p_temp = p_temp->p_next;
            }
            i++;
        }
    }
    return p_list;
} */