/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:34:18 by mohben-t          #+#    #+#             */
/*   Updated: 2025/02/28 12:34:19 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_stack(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    size = get_size(*stack_a);
    if (issorted(*stack_a))
        return;
    
    if (size == 2)
        sort_two(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size <= 5)
        sort_five(stack_a, stack_b);
    else
        radix_sort(stack_a, stack_b,0);
}
