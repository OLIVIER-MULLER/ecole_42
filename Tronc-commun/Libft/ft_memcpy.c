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
- depuis la chaine src
- sur la chaine dst
- en nombre limité par 'n'
Si la src est plus petite que la destination, le comportement n'est pas défini. 
En fait... il restera les derniers caractères de dest.
Les applications dans lesquelles src pourrait être plus petite devraient 
utiliser ft_memmove à la place. ft_memmove ne laissera pas ces derniers caractères.
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
	// On boucle 'n' fois
	i = 0;
	while (i < n)
	{
		// On assigne le pointeur src au pointeur s1. On utilise les pointeurs et pas
		// les valeurs car on itère ensuite sur les pointeurs
		*s1 = *(char *)src;
		// Itérations....
		s1++;
		src++;
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[] = "Ma string de destination";
	char	src[] = "*****";

	ft_memcpy(dst, src, 5);
	printf("Apres memcpy(): %s\n", dst);
	return (0);
}
*/
