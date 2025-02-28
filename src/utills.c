/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utills.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:22:08 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 06:46:18 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	errornl(t_var *var)
{
	ft_putstr_fd("Error\n", 2);
	free(var);
	exit(1);
}
void	*free_all(char **sp)
{
	size_t	j;

	j = 0;
	while (sp[j])
	{
		free(sp[j]);
		j++;
	}
	free(sp);
	return (0);
}

int	get_size(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = stack;
	if (!tmp)
		return (0);
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	search_min(t_var *var)
{
	int		min;
	t_stack	*temp;

	temp = var->head_a;
	min = temp->val;
	while (temp)
	{
		if (temp->val < min)
			min = temp->val;
		temp = temp->next;
	}
	return (min);
}

int	search_max(t_var *var)
{
	int		max;
	t_stack	*temp;

	temp = var->head_a;
	max = temp->index;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}