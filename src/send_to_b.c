/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:41:27 by mohben-t          #+#    #+#             */
/*   Updated: 2025/03/01 12:00:13 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	calcul_piv(int *rem, int *pivot_1, int *pivot_2, t_stack *a)
{
	*rem = *pivot_1;
	*pivot_2 = (get_size(a) / 6) + (*pivot_1);
	*pivot_1 += (get_size(a) / 3);
}

int	in_stack(t_stack *stack, int piv)
{
	t_stack	*tmp;

	tmp = stack;
	if (!stack)
		return (-1);
	while (tmp)
	{
		if (tmp->index < piv)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	send_to_b(t_var *var)
{
	int	pivot_1;
	int	pivot_2;
	int	rem;

	rem = -1;
	pivot_2 = (get_size(var->head_a) / 6);
	pivot_1 = (get_size(var->head_a) / 3);
	while (get_size(var->head_a) > 3)
	{
		if (get_size(var->head_b) >= 2 && var->head_a->index > pivot_1
			&& var->head_b->index > rem && var->head_b->index < pivot_2)
			rr(&var->head_a, &var->head_b);
		else if (get_size(var->head_b) >= 2 && var->head_b->index > rem
			&& var->head_b->index < pivot_2)
			rb(&var->head_b);
		if (var->head_a->index < pivot_1)
			pb(&var->head_a, &var->head_b);
		else
			ra(&var->head_a);
		if (!in_stack(var->head_a, pivot_1))
			calcul_piv(&rem, &pivot_1, &pivot_2, var->head_a);
	}
	sort_three(&var->head_a);
}
