/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_02.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:27:49 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 15:38:02 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char c, int *cnt)
{
	write(1, &c, 1);
	*cnt = *cnt + 1;
}

void    ft_strprint(long unsigned int n, char *base, unsigned int size, int *cnt)
{
	if (n > size - 1)
	{
		ft_strprint(n / size, base, size, cnt);
		n %= size;
	}
	ft_putchar(base[n], cnt);
}

void    ft_putnbr_base(long int n, char *base, int *cnt)
{
	int size;
	
	size = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-', cnt);
		ft_strprint(-n, base, size, cnt);
	}
	else
		ft_strprint(n, base, size, cnt);
}

void    ft_putstr(char *str, int *cnt)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
		*cnt = *cnt + 1;
	}
	write(1, str, i);
}
