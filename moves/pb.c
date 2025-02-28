/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:42:15 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:43 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*removeda;

	if (*a == NULL)
		return ;
	removeda = *a;
	*a = (*a)->next;
	fs_stacadd_front(b, fs_stacnew(removeda->val, removeda->index));
	free(removeda);
	write(1, "pb\n", 3);
}
