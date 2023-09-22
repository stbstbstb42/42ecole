#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		k;

	k = 0;
	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (0);
	while (src[k])
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = 0;
	return (dest);
}
