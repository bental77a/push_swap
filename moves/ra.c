/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:43:07 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:46 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*secend;

	first = *a;
	secend = first->next;
	while (secend->next)
		secend = secend->next;
	secend->next = first;
	*a = first->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}
