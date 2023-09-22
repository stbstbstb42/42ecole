#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
			str++;
			break ;
		}
		str++;
		break ;
	}
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (sign * num);
}
