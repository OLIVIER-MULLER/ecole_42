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

/*
ft_memcpy copie des bytes 
- depuis une la chaine src
- sur la chaine dst
- en nombre limité par 'n'
Si dst et src se chevauchent, le comportement n'est pas défini. 
Les applications dans lesquelles dst et src pourraient se chevaucher devraient 
utiliser ft_memmove à la place.
*/

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	// On crée i en size_t et on crée le pointeur s1.
	size_t	i;
	char	*s1;
	// Si n est NULL ou si les 2 chaines sont identiques on retourne
	// la chaine de destination.
	if (!n || dst == src)
	{
		return (dst);
	}
	// On initialise s1 avec dst casté en char * pour "ecraser le void"
	s1 = (char *)dst;
	// On itère de la valeur n
	i = 0;
	while (i < n)
	{
		*s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}
/*int	main(void)
{
	char	dst[] = "Ma st";
	char	src[] = "**************";

	ft_memcpy(dst, src, 5);
	printf("Apres memcpy(): %s\n", dst);
	return (0);
}*/
