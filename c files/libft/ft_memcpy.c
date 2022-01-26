/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:59:02 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/17 17:55:06 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_byte			*d;
	const t_byte	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (dst);
	while (n)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
