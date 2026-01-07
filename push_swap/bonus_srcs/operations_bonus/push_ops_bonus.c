/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:02:14 by arochd            #+#    #+#             */
/*   Updated: 2025/12/19 15:26:10 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa_s(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (!stack_b || !stack_b->head)
		return ;
	node = stack_remove_front(stack_b);
	add_to_top(stack_a, node);
}

void	pb_s(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node;

	if (!stack_a || !stack_a->head)
		return ;
	node = stack_remove_front(stack_a);
	add_to_top(stack_b, node);
}
