/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:55:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 16:41:11 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*last_address;

	i = 0;
	str = (char *)s;
	last_address = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_address = &str[i];
		i++;
	}
	if ((char)c == str[i])
		last_address = &str[i];
	return (last_address);
}

/*int	main(void)
{
	char str[] = "ggggggggaggaggggggg";
	int c = 97;
	printf("L\'adresse de mon dernier char est: %p\n",ft_strrchr(str, c));
	return (0);
}*/
