/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:50:06 by arochd            #+#    #+#             */
/*   Updated: 2025/12/13 15:50:07 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	index_stack_nodes(t_stack *stack)
{
	t_node	*node;
	t_node	*check;
	int		index;

	node = stack->head;
	while (node)
	{
		index = 0;
		check = stack->head;
		while (check)
		{
			if (check->value < node->value)
				index++;
			check = check->next;
		}
		node->index = index;
		node = node->next;
	}
}
