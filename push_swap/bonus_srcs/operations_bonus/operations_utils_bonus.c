/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 12:32:11 by arochd            #+#    #+#             */
/*   Updated: 2025/12/19 15:26:06 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node	*stack_remove_front(t_stack *stack)
{
	t_node	*tmp;

	if (!stack || !stack->head)
		return (NULL);
	tmp = stack->head;
	stack->head = stack->head->next;
	if (stack->head)
		stack->head->prev = NULL;
	else
		stack->tail = NULL;
	tmp->next = NULL;
	tmp->prev = NULL;
	stack->size--;
	return (tmp);
}

t_node	*stack_remove_back(t_stack *stack)
{
	t_node	*tmp;

	if (!stack || !stack->head)
		return (NULL);
	tmp = stack->tail;
	stack->tail = stack->tail->prev;
	if (stack->tail)
		stack->tail->next = NULL;
	else
		stack->head = NULL;
	tmp->next = NULL;
	tmp->prev = NULL;
	stack->size--;
	return (tmp);
}
