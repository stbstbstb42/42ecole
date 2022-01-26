/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:14:41 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/13 13:55:33 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const t_byte	*str;

	str = s;
	while (n)
	{
		if (*str == (t_byte)c)
			return ((t_byte *)str);
		str++;
		n--;
	}
	return (0);
}
