/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 12:15:19 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:33:42 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	s_count(char const *s, char c)
{
	size_t		i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**matrix;
	char		*start;
	size_t		i;
	size_t		len;

	matrix = ft_calloc(s_count(s, c) + 1, sizeof(*matrix));
	if (!matrix)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			len = s - start + 1;
			matrix[i] = ft_calloc(len, sizeof(**matrix));
			ft_strlcpy(matrix[i++], start, len);
		}
		else
			s++;
	}
	return (matrix);
}
