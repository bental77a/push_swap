/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:26:59 by mohben-t          #+#    #+#             */
/*   Updated: 2025/03/01 11:27:36 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../libft/libft.h"

typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_var
{
	char			*avs;
	char			**args;
	int				size;
	int				*arr;
	struct s_stack	*head_a;
	struct s_stack	*head_b;

}					t_var;

/*-----------------------------|  MOVES |------------------------------------*/

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);



/*-----------------------------|  LINKED_UTILLS |------------------------------------*/

void	fs_stacadd_back(t_stack **lst, t_stack *new);
t_stack	*fs_stacnew(int val, int index);
void	fs_stacadd_front(t_stack **lst, t_stack *new);
void	fs_stacclear(t_stack **lst);
int	fs_stacsize(t_stack *lst);
void	errornl(t_var *var);
int	get_size(t_stack *stack);
int find_min_position(t_stack *stack);
int	search_max(t_var *var);



/*-----------------------------|  FREE_ALLOCATION |------------------------------------*/

void	*free_all(char **sp);
void	free_stack(t_stack **stack);

/*-----------------------------|  FOUNCTIONS |------------------------------------*/

int		checkspaces(char *str);
void	joinargs(char **av, int ac, t_var *var);
void	initstack(t_var *var);
void	isdup(t_stack *stack, t_var *var);
int		issorted(t_stack *stack);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack_a);
void	sort_two(t_stack **stack_a);
void 	sort_stack(t_var *var, t_stack **stack_a, t_stack **stack_b);
void	send_to_a(t_var *var);
void	send_to_b(t_var *var);
void	indexstack(t_var *var);
void	bubblesort(t_var *var);
void	indexit(t_var *var);
void	swap(int *a, int *b);
#endif
