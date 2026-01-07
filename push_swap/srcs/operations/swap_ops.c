/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:47:43 by arochd            #+#    #+#             */
/*   Updated: 2025/12/10 17:22:13 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	t_node	*first;
	t_node	*second;

	if (!stack_a || stack_a->size <= 1)
		return ;
	first = stack_remove_front(stack_a);
	second = stack_remove_front(stack_a);
	add_to_top(stack_a, first);
	add_to_top(stack_a, second);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	t_node	*first;
	t_node	*second;

	if (!stack_b || stack_b->size <= 1)
		return ;
	first = stack_remove_front(stack_b);
	second = stack_remove_front(stack_b);
	add_to_top(stack_b, first);
	add_to_top(stack_b, second);
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*first_a;
	t_node	*second_a;
	t_node	*first_b;
	t_node	*second_b;

	if (stack_a && stack_a->size > 1)
	{
		first_a = stack_remove_front(stack_a);
		second_a = stack_remove_front(stack_a);
		add_to_top(stack_a, first_a);
		add_to_top(stack_a, second_a);
	}
	if (stack_b && stack_b->size > 1)
	{
		first_b = stack_remove_front(stack_b);
		second_b = stack_remove_front(stack_b);
		add_to_top(stack_b, first_b);
		add_to_top(stack_b, second_b);
	}
	write (1, "ss\n", 3);
}
