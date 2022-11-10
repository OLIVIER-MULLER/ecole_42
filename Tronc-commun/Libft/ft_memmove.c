/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 20:29:32 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 12:22:59 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_memmove est similaire a ft_memcpy mais cette fonction est plus sure si 
la source est plus petite que la destination. Les derniers char de la dest ne seront pas repris...
ft_memmove copie des bytes 
- depuis la chaine src
- sur la chaine dest
- en nombre limité par 'n'
*/

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	// On crée deux pointeurs s1 et s2 que l'on caste:
	// - void => unsigned char *
	// - const void => unsigned char *
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	// Si la source est plus petite que la destination on decremente sur n
	if (s2 < s1)
		// On decremente n a chaque tour temps que la condition est vraie.
		// La condition ex: while (n) est vraie temps que n n'est pas egale à 0.
		while (n--)
		// On assigne rien temps que la src est vide. 
		// On assigne a partir du moment ou src contient quelque chose.
			s1[n] = s2[n];
	// Si la source est plus grande que la destination on fait un memcpy classique.
	else
		ft_memcpy(s1, s2, n);
	// On retourne la destination (Egale à la src quelques soient les différentes tailles)
	return (dest);
}
/*
int	main(void)
{
	char	dst[] = "Ma string de destination";
	char	src[] = "Ma source";

	printf("Avant memmove(): %s\n",dst);
	printf("Retour de memmove: %s\n",(char *)ft_memmove(dst, src, 40));
	printf("Apres memmove(): %s\n",dst);
	printf("Apres memmove(): %s\n",src);
	return (0);
}
*/