int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c + 'A' - 'a');
	else
		return (c);
}
