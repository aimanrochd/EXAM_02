/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 00:10:24 by arochd            #+#    #+#             */
/*   Updated: 2025/12/13 00:10:26 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	smallest_location(t_stack *a)
{
	t_node	*node;
	int		min_value;
	int		min_pos;
	int		pos;

	node = a->head;
	min_value = node->value;
	min_pos = 0;
	pos = 0;
	while (node)
	{
		if (node->value < min_value)
		{
			min_value = node->value;
			min_pos = pos;
		}
		node = node->next;
		pos++;
	}
	return (min_pos);
}

void	rotate_up(t_stack *a, int pos)
{
	while (pos > 0)
	{
		ra(a);
		pos--;
	}
}

void	rotate_down(t_stack *a, int pos, int size)
{
	while (pos < size)
	{
		rra(a);
		pos++;
	}
}

void	push_min_to_b(t_stack *a, t_stack *b)
{
	int	pos;
	int	size;

	pos = smallest_location(a);
	size = a->size;
	if (pos <= size / 2)
		rotate_up(a, pos);
	else
		rotate_down(a, pos, size);
	pb(a, b);
}
