/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:31:03 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:47:04 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*secend;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	secend = first->next;
	*b = secend;
	first->next = secend->next;
	secend->next = first;
	write(1, "sb\n", 3);
}
