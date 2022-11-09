/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:47:44 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 15:14:10 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//Calcul de la valeur de retour pour srcsize	
//Ecriture de la chaine en commencant a la fin de dest[]

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	limitsize;
	size_t	k;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	limitsize = dstsize;
	if (limitsize == 0)
		return (srcsize);
	if (limitsize < destsize)
		srcsize += limitsize;
	else
		srcsize += destsize;
	k = 0;
	while (src[k] != '\0' && (destsize + k) < limitsize - 1)
	{
		dest[destsize + k] = src[k];
		k++;
	}
	dest[destsize + k] = '\0';
	return (srcsize);
}

/*int	main(void)
{
    char    dest[] = "Ma str";
    char    src[] = "123456789";

    printf("Resultat nombre caractere strlcat: %lu\n", ft_strlcat(dest, src, 3));
    printf("Nouvelle string: %s\n", dest);
    return (0);
}*/
