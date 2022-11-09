/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:06:30 by omuller           #+#    #+#             */
/*   Updated: 2022/11/04 21:14:51 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	if (!n || dst == src)
	{
		return (dst);
	}
	s1 = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}
/*int	main(void)
{
	char	dst[] = "Ma string de destination";
	char	src[] = "**************";

	ft_memcpy(dst, src, 5);
	printf("Apres memcpy(): %s\n", dst);
	return (0);
}*/
