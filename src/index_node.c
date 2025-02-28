/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:07:16 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:44:56 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	indexstack(t_var *var)
{
	int		i;
	t_stack	*tmp;

	var->arr = (int *)malloc((var->size) * sizeof(int));
	tmp = var->head_a;
	i = 0;
	while (tmp)
	{
		var->arr[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	bubblesort(var);
	indexit(var);
}

void	bubblesort(t_var *var)
{
	int	i;
	int	j;

	i = 0;
	while (i < var->size)
	{
		j = 0;
		while (j < var->size - i - 1)
		{
			if (var->arr[j] > var->arr[j + 1])
				swap(&var->arr[j], &var->arr[j + 1]);
			j++;
		}
		i++;
	}
}

void	indexit(t_var *var)
{
	t_stack	*tmp;
	int		i;

	tmp = var->head_a;
	while (tmp)
	{
		i = 0;
		while (i < var->size)
		{
			if (tmp->val == var->arr[i])
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
	free(var->arr);
}

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
