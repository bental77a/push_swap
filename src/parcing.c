/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:49:17 by aelomari          #+#    #+#             */
/*   Updated: 2025/02/28 12:41:47 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	checkspaces(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			flag = 0;
		i++;
	}
	return (flag);
}

void	joinargs(char **av, int ac, t_var *var)
{
	char	*tmp;
	char	*old_avs;
	int		i;

	tmp = NULL;
	old_avs = NULL;
	var->avs = ft_strdup("");
	i = 1;
	
	while (i <= ac - 1)
	{
		if (checkspaces(av[i]))
		{
			free(var->avs);
			errornl(var);
		}
		tmp = ft_strjoin(av[i], " ");
		old_avs = var->avs;
		var->avs = ft_strjoin(var->avs, tmp);
		if (old_avs)
			free(old_avs);
		free(tmp);
		i++;
	}
	var->args = ft_split(var->avs, ' ');
	free(var->avs);
}

void	initstack(t_var *var)
{
	int	y;

	var->head_a = NULL;
	var->head_b = NULL;
	var->size = 0;
	while (var->args[var->size])
	{
		y = 0;
		while (var->args[var->size][y])
		{
			if (!ft_isdigit(var->args[var->size][y]))
			{
				free_all(var->args);
				free_stack(&var->head_a);
				errornl(var);
			}
			y++;
		}
		fs_stacadd_back(&var->head_a, fs_stacnew(ft_atoi(var->args[var->size]),
				0));
		var->size++;
	}
	free_all(var->args);
}

void	isdup(t_stack *stack, t_var *var)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = stack;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->val == tmp2->val)
			{
				free_stack(&stack);
				errornl(var);
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

int	 issorted(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp && tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
