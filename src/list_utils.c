/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:07:16 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:45:43 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fs_stacadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		new->next = NULL;
		temp->next = new;
	}
}

t_stack	*fs_stacnew(int val, int index)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->val = val;
	new->index = index;
	new->next = NULL;
	return (new);
}

void	fs_stacadd_front(t_stack **lst, t_stack *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	fs_stacclear(t_stack **lst)
{
	t_stack	*temp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}

int	fs_stacsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
