/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 07:54:07 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/24 17:24:13 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	dst += d_len;
	if (dstsize > d_len)
		ft_strlcpy(dst, src, dstsize - d_len);
	if (dstsize < d_len)
		return (s_len + dstsize);
	return (d_len + s_len);
}
