/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:22:22 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:22:47 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	x;
	size_t	i;

	if (!s)
		return (0);
	else if (ft_strlen(s) - start > len)
		x = len;
	else
		x = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		dest = ft_calloc(1, sizeof(char));
		return (dest);
	}
	i = 0;
	dest = malloc(sizeof(char) * (x + 1));
	if (!dest)
		return (0);
	while (i < x)
		dest[i++] = s[start++];
	dest[i] = 0;
	return (dest);
}
