/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 20:59:28 by arochd            #+#    #+#             */
/*   Updated: 2025/12/26 09:54:12 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include "../includes/get_next_line.h"

int	is_all_whitespace(char *str)
{
	int	i;

	if (!str)
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
			return (0);
		i++;
	}
	return (1);
}

int	execute(char *line, t_stack *a, t_stack *b)
{
	if (ft_strcmp(line, "pa\n") == 0)
		pa_s(a, b);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb_s(a, b);
	else if (ft_strcmp(line, "sa\n") == 0)
		sa_s(a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb_s(b);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra_s(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb_s(b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra_s(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb_s(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr_s(a, b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr_s(a, b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss_s(a, b);
	else
		return (0);
	return (1);
}

t_stack	*init_stacks_bonus(int ac, char **av, t_stack **b)
{
	char	**args;
	t_stack	*a;

	args = collect_arguments(ac, av);
	if (!args)
		return (0);
	if (!numeric_checker(args) || dups_spotter(args))
	{
		clear_args(args);
		return (error_stack());
	}
	a = build_stack(args);
	*b = create_stack();
	clear_args(args);
	if (!a || !*b)
		return (error_stack());
	return (a);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	if (ac < 2 ||!av[1][0] || is_all_whitespace(av[1]))
		return (0);
	a = init_stacks_bonus(ac, av, &b);
	line = get_next_line(0);
	while (line)
	{
		if (execute(line, a, b) == 0)
		{
			free(line);
			free_stacks(a, b);
			write (2, "Error\n", 6);
			return (1);
		}
		free(line);
		line = get_next_line(0);
	}
	if (is_sorted(a) && !b->size)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (free_stacks(a, b), 0);
}
