/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:16:07 by arochd            #+#    #+#             */
/*   Updated: 2025/12/13 16:16:09 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	calc_chunk_size(int size)
{
	if (size <= 100)
		return (16);
	return (32);
}

void	bring_target_top(t_stack *b, int pos)
{
	int	size;

	size = b->size;
	if (pos <= 0)
		return ;
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			rb(b);
	}
	else
	{
		while (pos++ < size)
			rrb(b);
	}
}

int	get_pos_by_index(t_stack *stack, int target_index)
{
	t_node	*node;
	int		pos;

	node = stack->head;
	pos = 0;
	while (node)
	{
		if (node->index == target_index)
			return (pos);
		node = node->next;
		pos++;
	}
	return (-1);
}
