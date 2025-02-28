/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:27:58 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:47:01 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*secend;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	secend = first->next;
	*a = secend;
	first->next = secend->next;
	secend->next = first;
	write(1, "sa\n", 3);
}
