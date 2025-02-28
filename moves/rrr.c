/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:45:33 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:59 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*temp2a;
	t_stack	*tempa;
	t_stack	*temp2b;
	t_stack	*tempb;

	if ((*a == NULL || (*a)->next == NULL) || (*b == NULL
			|| (*b)->next == NULL))
		return ;
	tempa = *a;
	while (tempa->next->next)
		tempa = tempa->next;
	temp2a = tempa->next;
	tempa->next = NULL;
	temp2a->next = *a;
	*a = temp2a;
	tempb = *b;
	while (tempb->next->next)
		tempb = tempb->next;
	temp2b = tempb->next;
	tempb->next = NULL;
	temp2b->next = *b;
	*b = temp2b;
	write(1, "rrr\n", 4);
}
