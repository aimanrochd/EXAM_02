/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:30:11 by arochd            #+#    #+#             */
/*   Updated: 2025/12/29 12:57:15 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total;
	char	*joinedstr;

	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total = s1_len + s2_len;
	joinedstr = malloc(total + 1);
	if (!joinedstr)
		return (NULL);
	ft_memcpy(joinedstr, s1, s1_len);
	ft_memcpy(joinedstr + s1_len, s2, s2_len);
	joinedstr[total] = '\0';
	return (joinedstr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	n = len;
	if (n > s_len - start)
		n = s_len - start;
	substr = malloc (n + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destination;
	char	*source;

	if (!dest && !src)
		return (NULL);
	i = 0;
	destination = (char *)dest;
	source = (char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*duplicated;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	duplicated = malloc((len + 1) * sizeof(char));
	if (!duplicated)
		return (NULL);
	i = 0;
	while (i < len)
	{
		duplicated[i] = s[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}
