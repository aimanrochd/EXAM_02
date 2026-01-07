/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:26:34 by arochd            #+#    #+#             */
/*   Updated: 2025/12/19 15:25:45 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrr_s(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*node_a;
	t_node	*node_b;

	if (stack_a && stack_a->size > 1)
	{
		node_a = stack_remove_back(stack_a);
		add_to_top(stack_a, node_a);
	}
	if (stack_b && stack_b->size > 1)
	{
		node_b = stack_remove_back(stack_b);
		add_to_top(stack_b, node_b);
	}
}
