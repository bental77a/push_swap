/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:43:50 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:33 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*secend;

	if (!b || !(*b) || !((*b)->next))
		return ;
	first = *b;
	secend = first->next;
	while (secend->next)
		secend = secend->next;
	secend->next = first;
	*b = first->next;
	first->next = NULL;
	write(1, "rb\n", 3);
}
