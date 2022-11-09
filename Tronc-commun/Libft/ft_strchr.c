/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:55:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 16:20:52 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if ((char)c == str[i])
		return (&str[i]);
	return (NULL);
}

/*int	main(void)
{
	char str[] = "ggggggggagggggggggg";
	int c = 97;
	printf("L\'adresse de mon char est: %p\n",ft_strchr(str, c));
	return (0);
}*/
