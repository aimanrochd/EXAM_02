/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arochd <arochd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:45:38 by arochd            #+#    #+#             */
/*   Updated: 2025/11/23 17:46:40 by arochd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

static char	*remain_read(int fd, char *remain)
{
	char	*buf;
	int		nb_read;
	char	*temp;

	buf = malloc((size_t)BUFFER_SIZE + 1);
	if (!buf)
		return (free(remain), NULL);
	nb_read = 1;
	while (nb_read > 0 && (ft_strchr(remain, '\n') == -1))
	{
		nb_read = read(fd, buf, BUFFER_SIZE);
		if (nb_read < 0)
			return (free(buf), free(remain), NULL);
		buf[nb_read] = '\0';
		temp = remain;
		remain = ft_strjoin(temp, buf);
		free(temp);
		if (!remain)
			return (free(buf), NULL);
	}
	free(buf);
	return (remain);
}

static char	*line_extracter(char *str)
{
	char	*line;
	int		index;

	if (!str || !*str)
		return (NULL);
	index = ft_strchr(str, '\n');
	if (index == -1)
		line = ft_strdup(str);
	else
		line = ft_substr(str, 0, index + 1);
	return (line);
}

static char	*remained(char *str)
{
	char	*remain;
	int		index;

	index = ft_strchr(str, '\n');
	if (index == -1)
	{
		free(str);
		return (NULL);
	}
	remain = ft_substr(str, index + 1, ft_strlen(str) - (index + 1));
	free(str);
	return (remain);
}

char	*get_next_line(int fd)
{
	static char		*remain;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remain = remain_read(fd, remain);
	if (!remain)
		return (NULL);
	line = line_extracter(remain);
	remain = remained(remain);
	return (line);
}
