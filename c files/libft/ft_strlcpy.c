/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:46:16 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/12 09:53:19 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if ((ft_strlen(src) + 1) <= dstsize)
		ft_memcpy(dst, src, (ft_strlen(src) + 1));
	else if (dstsize)
	{
		ft_memcpy(dst, src, (dstsize - 1));
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(src));
}
