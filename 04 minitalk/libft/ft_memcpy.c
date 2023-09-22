#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*ptr;
	const char	*source;

	i = 0;
	ptr = dst;
	source = src;
	while (n--)
	{
		ptr[i] = source[i];
		i++;
	}
	return (dst);
}
