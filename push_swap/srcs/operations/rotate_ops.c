/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:00:56 by arochd            #+#    #+#             */
/*   Updated: 2025/12/10 17:21:47 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack *stack_a)
{
	t_node	*node;

	if (!stack_a || stack_a->size <= 1)
		return ;
	node = stack_remove_front(stack_a);
	add_to_bottom(stack_a, node);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	t_node	*node;

	if (!stack_b || stack_b->size <= 1)
		return ;
	node = stack_remove_front(stack_b);
	add_to_bottom(stack_b, node);
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node_a;
	t_node	*node_b;

	if (stack_a && stack_a->size > 1)
	{
		node_a = stack_remove_front(stack_a);
		add_to_bottom(stack_a, node_a);
	}
	if (stack_b && stack_b->size > 1)
	{
		node_b = stack_remove_front(stack_b);
		add_to_bottom(stack_b, node_b);
	}
	write(1, "rr\n", 3);
}

void	rra(t_stack *stack_a)
{
	t_node	*node;

	if (!stack_a || stack_a->size <= 1)
		return ;
	node = stack_remove_back(stack_a);
	add_to_top(stack_a, node);
	write (1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	t_node	*node;

	if (!stack_b || stack_b->size <= 1)
		return ;
	node = stack_remove_back(stack_b);
	add_to_top(stack_b, node);
	write(1, "rrb\n", 4);
}
