/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:22:44 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:24:37 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			c;
	long int	n2;

	n2 = n;
	c = ft_count(n2);
	str = ft_calloc(c + 1, sizeof(char));
	if (!str)
		return (0);
	if (n2 == 0)
		str[0] = '0';
	if (n2 < 0)
	{
		str[0] = '-';
		n2 *= -1;
	}
	while (n2 > 0)
	{
		str[c - 1] = (n2 % 10) + '0';
		n2 = n2 / 10;
		c--;
	}
	return (str);
}
