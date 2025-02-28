/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:31:54 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:47:08 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*firstb;
	t_stack	*firsta;
	t_stack	*secendb;
	t_stack	*secenda;

	if ((*b == NULL || (*b)->next == NULL) || (*a == NULL
			|| (*a)->next == NULL))
		return ;
	firstb = *b;
	secendb = firstb->next;
	*b = secendb;
	firstb->next = secendb->next;
	secendb->next = firstb;
	firsta = *a;
	secenda = firsta->next;
	*a = secenda;
	firsta->next = secenda->next;
	secenda->next = firsta;
	write(1, "ss\n", 3);
}
