/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:03:26 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/17 17:54:46 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	t_byte			*d;
	const t_byte	*s;

	d = dst;
	s = src;
	if (s < d)
	{
		while (len > 0)
		{
			*(d + len - 1) = *(s + len - 1);
			len--;
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}
