/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 08:50:43 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 10:14:52 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strnstr cherche ...
- dans une chaine (haystack : qui veut dire 'meule de foin'... si si)
- une autre chaine (needle : qui veux dire 'aiguille'... si si si)
- mais ne cherchera dans la haystack que sur 'n' caractères.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	// On crée des variables pour itérer : j & i en size_t car il sera comparé avec un autre size_t
	size_t			i;
	int				j;
	// Si needle est vide, on retourne haystack casté en simple char. Pourra être modifié...
	if (!*needle)
		return ((char *)haystack);
	// On itère sur toute la haystack
	i = 0;
	while (haystack[i] != '\0')
	{
		/*
		On commence a boucler et on incrémente i & j seulement si et temps que :
		- les char sont similaires
		- la fin de la haystack n'et pas atteinte
		- la limite d'itération 'len' n'est pas atteinte
		*/
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && i < len)
		{
			i++;
			j++;
		}
		// On sort de la boucle si l'une des conditions précédentes n'est plus atteinte.
		// Si on a itéré j pour needle jusqu'au caractere d'arrêt (on a l'aiguille complète...)
		// Alors on retourne l'adresse de début de boucle.
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		// Si on a pas atteint le caractère d'arrêt alors on reboucle avec le i de départ + 1  
		i = (i - j) + 1;
	}
	return (NULL);
}
