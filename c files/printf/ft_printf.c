/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:13:02 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:09:30 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	x;
	t_count	count;

	i = 0;
	count.cnt = 0;
	va_start(x, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_ifpercent(str, i, x, &count.cnt);
			i++;	
		}
		else
			ft_putchar(str[i], &count.cnt);
		i++;
	}
	va_end(x);
	return (count.cnt);
}



int	main()
{
	
	printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	//ft_printf(" %c %c %c", '0', '1', '2');
	//printf(" %c %c %c", '0', '1', '2');
	//printf(" %c %c %c", '0', '1', '2');

/*
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	
	ft_printf("Test %%c:\n");
	
	ft_printf("\nft_printf: \n");
	printf(" %d ", 0);
	ft_printf("\nOriginal printf: \n");
	ft_printf(" %d ", 0);


	ft_printf("\nft_printf: \n");
	ft_printf(" %d ", 0);
	ft_printf("\nOriginal printf: \n");
	printf(" %d ", 0);

	ft_printf("\nft_printf: \n");
	ft_printf(" %c", '0' - 256);
	ft_printf("\nOriginal printf: \n");
	printf(" %c", '0' - 256);

	ft_printf("\nft_printf: \n");
	ft_printf("%c ", '0' + 256);
	ft_printf("\nOriginal printf: \n");
	printf("%c ", '0' + 256);

	ft_printf("\nft_printf: \n");
	ft_printf(" %c %c %c ", '0', 0, '1');
	ft_printf("\nOriginal printf: \n");
	printf(" %c %c %c ", '0', 0, '1');

	ft_printf("\nft_printf: \n");
	ft_printf(" %c %c %c ", ' ', ' ', ' ');
	ft_printf("\nOriginal printf: \n");
	printf(" %c %c %c ", ' ', ' ', ' ');

	ft_printf("\nft_printf: \n");
	ft_printf(" %c %c %c ", 0, '1', '2');
	ft_printf("\nOriginal printf: \n-"); 
	printf( %c %c %c ", 0, '1', '2'); 
	*/
}

/*
TEST(1, print("%c", '0'));
	TEST(2, print(" %c ", '0'));
	TEST(3, print(" %c", '0' - 256));
	TEST(4, print("%c ", '0' + 256));
	TEST(5, print(" %c %c %c ", '0', 0, '1'));
	TEST(6, print(" %c %c %c ", ' ', ' ', ' '));
	TEST(7, print(" %c %c %c ", '1', '2', '3'));
	TEST(8, print(" %c %c %c ", '2', '1', 0));
	TEST(9, print(" %c %c %c ", 0, '1', '2')); 
*/