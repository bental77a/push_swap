/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:45:38 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:57 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rrb(t_stack **b)
{
	t_stack	*temp2;
	t_stack	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	while (temp->next->next)
		temp = temp->next;
	temp2 = temp->next;
	temp->next = NULL;
	temp2->next = *b;
	*b = temp2;
	write(1, "rrb\n", 4);
}
