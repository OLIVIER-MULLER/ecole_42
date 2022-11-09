unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int				i;
	unsigned int	dest_lenght;

	dest_lenght = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[dest_lenght + i] = src[i];
		i++;
	}
	dest[dest_lenght + i] = '\0';
	return (dest);
}
