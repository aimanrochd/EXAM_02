/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:02:14 by arochd            #+#    #+#             */
/*   Updated: 2025/12/10 15:48:27 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (!stack_b || !stack_b->head)
		return ;
	node = stack_remove_front(stack_b);
	add_to_top(stack_a, node);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (!stack_a || !stack_a->head)
		return ;
	node = stack_remove_front(stack_a);
	add_to_top(stack_b, node);
	write(1, "pb\n", 3);
}
