/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:44:34 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:52 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*firstb;
	t_stack	*secendb;
	t_stack	*firsta;
	t_stack	*secenda;

	firstb = *b;
	secendb = firstb->next;
	while (secendb->next)
		secendb = secendb->next;
	secendb->next = firstb;
	*b = firstb->next;
	firstb->next = NULL;
	firsta = *a;
	secenda = firsta->next;
	while (secenda->next)
		secenda = secenda->next;
	secenda->next = firsta;
	*a = firsta->next;
	firsta->next = NULL;
	write(1, "rr\n", 3);
}
