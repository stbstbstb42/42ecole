#include "push_swap.h"

void	ft_rotate(int *ar, int size)
{
	int	temp;
	int	i;

	size -= 1;
	i = 0;
	temp = ar[0];
	while (i < size)
	{
		ar[i] = ar[i + 1];
		i++;
	}
	ar[size] = temp;
}

void	ft_rotate_a(t_struct *data)
{
	write(1, "ra\n", 3);
	ft_rotate(data->ar_a, data->size_a);
}

void	ft_rotate_b(t_struct *data)
{
	write(1, "rb\n", 3);
	ft_rotate(data->ar_b, data->size_b);
}

void	ft_rotate_r(t_struct *data)
{
	write(1, "rr\n", 3);
	ft_rotate(data->ar_a, data->size_a);
	ft_rotate(data->ar_b, data->size_b);
}
