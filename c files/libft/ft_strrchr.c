/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:01:37 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/17 16:37:13 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (ft_strlen(s));
	s = s + i;
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		i--;
		s--;
	}
	return (0);
}
