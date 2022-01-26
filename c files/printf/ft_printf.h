/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:21:30 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/26 17:07:26 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef unsigned char   t_byte;
typedef struct s_count
{
    int cnt;
}               t_count;


int				ft_printf(const char *str, ...);
void			ft_ifpercent(const char *str, int i, va_list x, int *cnt);
void			ft_putchar(char c, int *cnt);
void			ft_putnbr_base(long int n, char *base, int *cnt);
void			ft_putstr(char *str, int *cnt);
void			ft_ifperc1(char const *str, int i, va_list x, int *cnt);
void			ft_ifperc2(char const *str, int i, va_list x, int *cnt);
void			ft_ifperc3(char const *str, int i, va_list x, int *cnt);
unsigned long	ft_unsneg(int n);
void			ft_pf_putnbr_hex_addr(unsigned long long int n, int *cnt);
int				ft_strlen(char *str);

#endif
