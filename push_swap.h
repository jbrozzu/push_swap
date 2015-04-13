/*
HEADER
*/

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct			s_node
{
	int					data;
	struct s_node		*p_next;
	struct s_node		*p_prev;
}						t_node;

typedef struct			s_list
{
	size_t				list_length;
	char				*list_name;
	t_node				*p_tail;
	t_node				*p_head;
}						t_list;

int						instruction(int argc, char **argv, int trace, int *nbr, int x);
int 					flags(char **argv, int *trace, int *x);
void					help(void);
void					less_args(int argc, char **argv);
int						test_args_nb(char **argv);
int						test_size(char **argv);
int 					test_recurence(int argc, char **argv);
int						check_args(int argc, char **argv);
t_list					*fill_list(int argc, char **argv);
t_list					*list_new(char *listname);
t_list					*list_append(t_list *p_list, int data);
t_list					*list_prepend(t_list *p_list, int data);
size_t					list_length(t_list *p_list);
int						list_displayBT(t_list *p_list);
int 					list_displayBTglobal(int trace, t_list *p_list1, t_list *p_list2);
int						list_trie_a(t_list *p_list);
int						list_trie_b(t_list *p_list);
int						list_remove_first(t_list *p_list);
int						list_remove_last(t_list *p_list);
int						return_Top(t_list *p_list);
int						return_Tail(t_list *p_list);
void					Top_Top(t_list *p_list1, t_list *p_list2, int trace);
void					rotate(t_list *p_list1, t_list *p_list2, int trace);
void					reverserotate(t_list *p_list1, t_list *p_list2, int trace);
int 					swap(t_list *p_list1, t_list *p_list2, int trace);
int 					test_head(t_list *p_list1);
int 					return_Tail_plus_1(t_list *p_list);
int 					return_Top_moins_1(t_list *p_list);
int						push_swap(t_list *p_list_a, int trace, int *nbr);
int						push_swap2(t_list *p_list_a, int trace, int *nbr);
int						tool1(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool2(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool3(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool4(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool5(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool6(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool7(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool8(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
int						tool_global_1(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool_global_2(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool_global_3(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool_global_4(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);
void					tool_global_5(t_list *p_list_a, t_list *p_list_b, int trace, int *nbr);

# endif
