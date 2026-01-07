/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:00:56 by arochd            #+#    #+#             */
/*   Updated: 2025/12/19 15:26:16 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra_s(t_stack *stack_a)
{
	t_node	*node;

	if (!stack_a || stack_a->size <= 1)
		return ;
	node = stack_remove_front(stack_a);
	add_to_bottom(stack_a, node);
}

void	rb_s(t_stack *stack_b)
{
	t_node	*node;

	if (!stack_b || stack_b->size <= 1)
		return ;
	node = stack_remove_front(stack_b);
	add_to_bottom(stack_b, node);
}

void	rr_s(t_stack *stack_a, t_stack *stack_b)
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
}

void	rra_s(t_stack *stack_a)
{
	t_node	*node;

	if (!stack_a || stack_a->size <= 1)
		return ;
	node = stack_remove_back(stack_a);
	add_to_top(stack_a, node);
}

void	rrb_s(t_stack *stack_b)
{
	t_node	*node;

	if (!stack_b || stack_b->size <= 1)
		return ;
	node = stack_remove_back(stack_b);
	add_to_top(stack_b, node);
}
