/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_01.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:06:51 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 15:29:09 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long int	ft_unsneg(int n)
{
	return(4294967296 - -n);
}

void	ft_pf_putnbr_hex_addr(unsigned long long int n, int *cnt)
{
	if (n >= 16)
		ft_pf_putnbr_hex_addr(n / 16, cnt);
	if ((n % 16) > 9)
		ft_putchar(87 + n % 16, cnt);
	else
		ft_putchar(48 + n % 16, cnt);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
