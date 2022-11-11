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

/*
ft_strlcat copie src a la fin de dest et ajoute un '/0'
*/

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	k;
	// On initialise 3 variables. On assigne les tailles dest et de src
	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);

				/*   Calcul de srcsize pour le retour de la fonction   */

	// Si dstsize passé en paramètre est NULL on retourne srcsize
	if (dstsize == 0)
		return (srcsize);
	// Si dstsize passé en paramètre est plus petit que la taille reelle
	// de dest, on limite l'ajout a src a la taille passée en parametre avec dstsize.
	if (dstsize < destsize)
		srcsize += dstsize;
	// Si dstsize passé en paramètre est >= à la taille reelle
	// de dest, on ajoute a src la longueur totale de la chaine dest (destsize).
	else
		srcsize += destsize;

				/*   Concaténation de src apres dest   */

	// On itère temps que:
	// - on est pas la fin de src 
	// - la taille reelle de dest (destsize) est < a la taille souhaitée (dstsize)
	k = 0;
	while (src[k] != '\0' && (destsize + k) < dstsize - 1)
	{
		// On ecrit src sur dest a partir de sa fin
		dest[destsize + k] = src[k];
		k++;
	}
	// On ecrit le caractère d'arrêt
	dest[destsize + k] = '\0';
	return (srcsize);
}
/*
int	main(void)
{
    char    dest[100] = "Mastringdest";
    char    src[] = "123456789";

    printf("Retour de la taille de la src: %lu\n", ft_strlcat(dest, src, 22));
    printf("Nouvelle string: %s\n", dest);
    return (0);
}
*/
