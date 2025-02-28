/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:41:05 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:40 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*removedb;

	if (*b == NULL)
		return ;
	removedb = *b;
	*b = (*b)->next;
	fs_stacadd_front(a, fs_stacnew(removedb->val, removedb->index));
	free(removedb);
	write(1, "pa\n", 3);
}
