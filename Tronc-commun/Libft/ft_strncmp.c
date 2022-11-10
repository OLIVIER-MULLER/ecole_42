/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:48:49 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 18:26:38 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Strncmp compare deux chaines. 
Elle compare les caractères 1 par 1 jusqu'à trouver deux caractères différents.
Puis fait la différence mathématique. Str1 - str2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	/*On recrée les 2 chaines 's1' et 's2' que l'on appelle 'str1' et 'str2' 
	car 's' et 's2' sont const (read only).
	On cast obligatoirement en (unsigned char *).
	*/
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	// On itère jusqu'au caractère d'arret ou jusqu'a la limite fixée par n.
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	// Si on arrive sur le caractère d'arrêt de str1 ou a la limite n : 
	if (str2[i] == '\0' || i == n)
		// Retourne 0 si on est aussi au '/0' de str2 ou si on est a la limite fixée par n.
		return (0);
	else
		// Retourne 0 - str2 si la chaine str2 n'est pas finie.
		return (-str2[i]);
}
