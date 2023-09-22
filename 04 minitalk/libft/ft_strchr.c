char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (*str != (unsigned char)c)
	{
		if (*str == 0)
			return (0);
		str++;
	}
	return ((char *)str);
}
