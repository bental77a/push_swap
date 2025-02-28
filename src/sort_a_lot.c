#include "../includes/push_swap.h"

void radix_sort(t_stack **stack_a, t_stack **stack_b, int max_bits)
{
    int bit;
    int j;
    int num;
    int max_num;
    int size;

    max_num = find_min_position(*stack_a);
    size = get_size(*stack_a);
    while ((max_num >> max_bits) != 0)
        max_bits++;
    bit = 0;
    while (bit < max_bits)
    {
        j = 0;
        while (j < size)
        {
            num = (*stack_a)->val;
            if ((num >> bit) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            j++;
        }
        while (*stack_b)
            pa(stack_a, stack_b);
        bit++;
    }
}