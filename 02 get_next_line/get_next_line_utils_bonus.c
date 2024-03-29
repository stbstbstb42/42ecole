#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin_free(char const *s1, char const *s2, int size)
{
	char	*str;
	int		i;
	int		d;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1 != NULL && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	d = i;
	i = 0;
	while (i < size)
	{
		str[d] = s2[i];
		i++;
		d++;
	}
	str[d] = 0;
	free((void *)s1);
	return (str);
}

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (-1);
	while (s[i] != (unsigned char)c)
	{
		if (s[i] == 0)
			return (-1);
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, int start, int len, int free_flag)
{
	char	*sub;

	if ((free_flag && start == 0) || s == NULL)
		return (NULL);
	if (free_flag && start == len)
	{
		free((void *)s);
		return (NULL);
	}
	if (len == -1)
		return ((char *)s);
	len++;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		len = 0;
	sub = (char *)malloc(len + 1);
	funzione_while((char *)s, sub, len, start);
	if (free_flag)
		free((void *)s);
	return (sub);
}

void	funzione_while(char *s, char *sub, int len, int start)
{
	int	i;

	i = 0;
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = 0;
}
