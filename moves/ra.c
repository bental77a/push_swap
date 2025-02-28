#include "../includes/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*secend;

	first = *a;
	secend = first->next;
	while (secend->next)
		secend = secend->next;
	secend->next = first;
	*a = first->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}

