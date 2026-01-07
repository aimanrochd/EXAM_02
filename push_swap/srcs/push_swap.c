/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 02:00:00 by arochd            #+#    #+#             */
/*   Updated: 2025/12/29 12:43:32 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_exit(char **args, t_stack *a, t_stack *b)
{
	if (args)
		clear_args(args);
	if (a)
		cleanup_stack(a);
	if (b)
		cleanup_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

void	validate_input(int ac, char **av)
{
	int	i;
	int	j;
	int	has_digit;

	i = 1;
	while (i < ac)
	{
		if (av[i][0] == '\0')
			error_exit(NULL, NULL, NULL);
		j = 0;
		has_digit = 0;
		while (av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				has_digit = 1;
			j++;
		}
		if (!has_digit)
			error_exit(NULL, NULL, NULL);
		i++;
	}
}

void	choose_sort(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
		sort_three_items(a);
	else if (a->size == 4)
		sort_four_items(a, b);
	else if (a->size == 5)
		sort_five_items(a, b);
	else
		chunking_sort(a, b);
}

t_stack	*init_stacks(int ac, char **av, t_stack **stack_b)
{
	char	**args;
	t_stack	*stack_a;

	args = collect_arguments(ac, av);
	if (!args)
		error_exit(NULL, NULL, NULL);
	if (!numeric_checker(args) || !dups_spotter(args))
		error_exit(args, NULL, NULL);
	stack_a = build_stack(args);
	*stack_b = create_stack();
	if (!stack_a || !*stack_b)
		error_exit(args, stack_a, *stack_b);
	clear_args(args);
	return (stack_a);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac < 2)
		return (0);
	validate_input(ac, av);
	stack_a = init_stacks(ac, av, &stack_b);
	if (!is_sorted(stack_a))
		choose_sort(stack_a, stack_b);
	cleanup_stack(stack_a);
	cleanup_stack(stack_b);
	return (0);
}
