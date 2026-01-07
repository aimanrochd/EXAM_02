/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:22:58 by arochd            #+#    #+#             */
/*   Updated: 2025/12/14 14:46:06 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static	int	cost(int pos, int size)
{
	if (pos <= size / 2)
		return (pos);
	return (size - pos);
}

void	push_back_to_a(t_stack *a, t_stack *b)
{
	int	max_i;
	int	pos_max;
	int	pos_prev;

	while (b->size > 0)
	{
		max_i = b->size - 1;
		pos_max = get_pos_by_index(b, max_i);
		pos_prev = get_pos_by_index(b, max_i - 1);
		if (pos_prev != -1 && \
			cost(pos_prev, b->size) < cost(pos_max, b->size))
		{
			bring_target_top(b, pos_prev);
			pa(a, b);
			bring_target_top(b, get_pos_by_index(b, max_i));
			pa(a, b);
			sa(a);
		}
		else
		{
			bring_target_top(b, pos_max);
			pa(a, b);
		}
	}
}

void	chunking_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	chunk;

	index_stack_nodes(a);
	i = 0;
	chunk = calc_chunk_size(a->size);
	while (a->size > 0)
	{
		if (a->head->index <= i)
		{
			pb(a, b);
			i++;
		}
		else if (a->head->index <= i + chunk)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
	push_back_to_a(a, b);
}
