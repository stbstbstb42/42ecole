#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(ft_strlen(s) + 1);
	while (s[i])
	{
		new[i] = (f)(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
}
