#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s + ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	if (!ft_strlen(s))
		return (NULL);
	while (*str != (char)c)
	{
		if (str == (unsigned char *)s)
			return (NULL);
		str--;
	}
	return ((char *)str);
}
