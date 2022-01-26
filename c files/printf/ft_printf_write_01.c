/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_write_01.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:38:58 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:00:14 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ifperc1(const char *str, int i, va_list x, int *cnt)
{
	char	*s1;
	char	rc;
	
	if (str[i + 1] == 's')
	{		
		s1 = va_arg(x, char *);
		ft_putstr(s1, cnt);
		i++;
	}
	
	else if (str[i + 1] == 'c')
	{
		rc = va_arg(x, int);
		ft_putchar(rc, cnt);
		i++;
	}
	else if (str[i + 1] == '%')
	{
		ft_putchar('%', cnt);
		i++;
	}
}

void	ft_ifperc2(const char *str, int i, va_list x, int *cnt)
{
	int	ri;
	unsigned long long int 	rca;
	
	if (str[i + 1] == 'x')
	{
		rca = va_arg(x, unsigned long long int);
		ft_pf_putnbr_hex_addr(rca, cnt);
	//	ft_putnbr_base(ri, "0123456789abcdef", cnt);
		i++;
	}
	else if (str[i + 1] == 'X')
	{	
		ri = va_arg(x, int);
		ft_putnbr_base(ri, "0123456789ABCDEF", cnt);
		i++;
	}
	else if (str[i + 1] == 'i')
	{
		ri = va_arg(x, long long int);
		ft_putnbr_base(ri, "0123456789", cnt);
		i++;
	}
}

void    ft_ifperc3(const char *str, int i, va_list x, int *cnt)
{
	int	ri;
	unsigned long long int 	rca;
	
	if (str[i + 1] == 'd')
	{
		ri = va_arg(x, int);
		ft_putnbr_base(ri, "0123456789", cnt);
		i++;	
	}
	else if (str[i + 1] == 'u')
	{
		ri = va_arg(x, long int);
		if (ri < 0)
			ft_putnbr_base(ft_unsneg(ri), "0123456789", cnt);
		else   
			ft_putnbr_base(ri, "0123456789", cnt);
		i++;
	}
	else if (str[i + 1] == 'p')
	{
		rca = va_arg(x, unsigned long long int);
		write(1, "0x", 2);
		*cnt = *cnt + 2;
		ft_pf_putnbr_hex_addr(rca, cnt);
	}
}

void	ft_ifpercent(const char *str, int i, va_list x, int *cnt)
{
	ft_ifperc1(str, i, x, cnt);
	ft_ifperc2(str, i, x, cnt);
	ft_ifperc3(str, i, x, cnt);
}