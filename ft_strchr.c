/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:12:22 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/11 08:38:32 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int i;
	int d;
	char *stm;

	i = 0;
	d = 0;
	while (str[i] != 0 || str[i] != c)
		i++;
	while (str[i] != 0)
	{
		stm[d] = str[i];
		d++;
		i++;
	}
	stm[d] = '\0';
	return (stm);
}

int	main()
{
	char ch = '.';
	char *a = "www.chai.c";
	printf("%s", ft_strchr(a, ch));
}
