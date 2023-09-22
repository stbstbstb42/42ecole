#include "../push_swap.h"

void	ft_swap(int	*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_swap_a(int *ar)
{
	ft_swap(ar, ar + 1);
}

void	ft_swap_b(int *ar)
{
	ft_swap(ar, ar + 1);
}

void	ft_swap_s(int *ar_a, int *ar_b)
{
	ft_swap(ar_a, ar_a + 1);
	ft_swap(ar_b, ar_b + 1);
}
