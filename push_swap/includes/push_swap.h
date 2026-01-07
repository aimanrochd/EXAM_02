/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 11:14:56 by arochd            #+#    #+#             */
/*   Updated: 2025/12/11 11:14:58 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
}	t_stack;

// Libft Functions
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

// Parsing Functions
char	*join_and_free(char *s1, char *s2);
char	**collect_arguments(int ac, char **av);
void	clear_args(char **args);
int		dups_spotter(char **args);
int		numeric_checker(char **args);

// Stack Utils
t_node	*create_node(int value);
t_stack	*create_stack(void);
void	add_to_top(t_stack *stack, t_node *node);
void	add_to_bottom(t_stack *stack, t_node *node);
t_stack	*build_stack(char **args);

void	cleanup_stack(t_stack *stack);
int		is_sorted(t_stack *stack);

// Operations Utils
t_node	*stack_remove_front(t_stack *stack);
t_node	*stack_remove_back(t_stack *stack);

// Operations Functions
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

// Helper functions
int		smallest_location(t_stack *a);
void	push_min_to_b(t_stack *a, t_stack *b);

// Sorting functions
void	sort_three_items(t_stack *a);
void	sort_four_items(t_stack *a, t_stack *b);
void	sort_five_items(t_stack *a, t_stack *b);
void	index_stack_nodes(t_stack *stack);
int		calc_chunk_size(int stack_size);
void	chunking_sort(t_stack *a, t_stack *b);
void	bring_target_top(t_stack *b, int pos);
int		get_pos_by_index(t_stack *stack, int target_index);

// Bonus Functions
int		execute(char *line, t_stack *a, t_stack *b);
int		ft_strcmp(const char *s1, const char *s2);
t_stack	*error_stack(void);
int		is_all_whitespace(char *str);
void	free_stacks(t_stack *a, t_stack *b);
void	sa_s(t_stack *stack_a);
void	sb_s(t_stack *stack_b);
void	ss_s(t_stack *stack_a, t_stack *stack_b);
void	pa_s(t_stack *stack_a, t_stack *stack_b);
void	pb_s(t_stack *stack_a, t_stack *stack_b);
void	ra_s(t_stack *stack_a);
void	rb_s(t_stack *stack_b);
void	rr_s(t_stack *stack_a, t_stack *stack_b);
void	rra_s(t_stack *stack_a);
void	rrb_s(t_stack *stack_b);
void	rrr_s(t_stack *stack_a, t_stack *stack_b);

#endif