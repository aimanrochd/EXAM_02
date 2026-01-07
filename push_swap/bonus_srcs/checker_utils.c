/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 15:40:44 by arochd            #+#    #+#             */
/*   Updated: 2025/12/19 15:40:46 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

t_stack	*error_stack(void)
{
	write(2, "Error\n", 6);
	exit(1);
	return (NULL);
}

void	free_stacks(t_stack *a, t_stack *b)
{
	if (a)
		cleanup_stack(a);
	if (b)
		cleanup_stack(b);
}
