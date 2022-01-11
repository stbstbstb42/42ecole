/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:46:16 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/11 08:48:20 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t c;

	while (src[i])
		i++;
	if (dstsize > 0)
	{
		while (src[c] != 0 && c < dstsize)
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (i);
}

int	main()
{
	char dst[] = "";
	printf("%zu", ft_strlcpy(dst, "ciao", 2));
	printf("%s", dst);
}
