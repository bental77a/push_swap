#include "../includes/push_swap.h"

void sort_five(t_stack **stack_a, t_stack **stack_b)
{
    int	i;
	int	min_pos;

	i = 0;
    // 5 2 3 4 1
    while (i < 2)
    {
        min_pos = find_min_position(*stack_a);//1
        while (min_pos > 0) // true
        {
            if (min_pos <= get_size(*stack_a) / 2)
                ra(stack_a);
            else
                rra(stack_a);
            min_pos = find_min_position(*stack_a);
        }
        pb(stack_a, stack_b);
		i++;
    }

    sort_three(stack_a);
    while (*stack_b)
        pa(stack_a, stack_b);
}
