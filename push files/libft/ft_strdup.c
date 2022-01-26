/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:11:51 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:21:09 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
