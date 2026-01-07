/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:41:23 by arochd            #+#    #+#             */
/*   Updated: 2025/11/11 13:17:56 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*duplicated;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	duplicated = malloc((len + 1));
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*joinedstr;

	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s1 && !s2)
		return (NULL);
	joinedstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joinedstr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		joinedstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		joinedstr[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	return (joinedstr[ft_strlen(s1) + ft_strlen(s2)] = '\0', joinedstr);
}

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((int)i);
		i++;
	}
	return (-1);
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
