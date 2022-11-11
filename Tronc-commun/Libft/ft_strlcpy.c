/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:01:00 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 12:44:17 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strlcpy copie une chaine source dans une chaine dst
Elle copie au max:
- La même taille que src 
- Ou la dstsize en paramètre 
dst est terminée par un caractère d'arret

*/

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;
	// On initialise une variable srcsize et on assigne la taille de la source
	srcsize = ft_strlen(src);
	
	i = 0;
	// Si dstsize n'est pas NULL on boucle
	if (dstsize != 0)
	{
	// On boucle temps qu'on est pas a la fin de la source et que i est inferieur 
	// a dstzise -1 (on commennce a boucler a 0)
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
	// On rajoute le caractere d'arret
		dst[i] = '\0';
	}
	// On retourne la taille de la source
	return (srcsize);
}

/*int main(void)
{
	char	dst[] = "Ma stringgdggergergergergergrg";
	char	src[] = "**************";

	printf("Taille src retournée: %lu\n", ft_strlcpy(dst, src, 20));
	printf("Nouvelle string: %s\n", dst);
	return (0);
}*/
