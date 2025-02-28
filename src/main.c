#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_var	*var;

	if (ac >= 2)
	{
		var = (t_var *)malloc(sizeof(t_var));
		joinargs(av, ac, var);
		initstack(var);

		isdup(var->head_a, var);
		if (!issorted(var->head_a))
		{
			free_stack(&var->head_a);
			free(var);
			exit(0);
		}
		sort_stack(&var->head_a, &var->head_b);
	}
	return (0);
}
