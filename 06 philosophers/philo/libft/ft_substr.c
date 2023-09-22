#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if ((int)len > ft_strlen(s))
		len = ft_strlen(s);
	if ((int)start > ft_strlen(s))
		len = 0;
	sub = (char *)malloc(len + 1);
	i = 0;
	while (s[start] && i < (int)len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}
