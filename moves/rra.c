/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:45:41 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:54 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*temp2;
	t_stack	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	while (temp->next->next)
		temp = temp->next;
	temp2 = temp->next;
	temp->next = NULL;
	temp2->next = *a;
	*a = temp2;
	write(1, "rra\n", 4);
}
