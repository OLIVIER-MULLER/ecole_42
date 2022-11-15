/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:33:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/09 12:31:27 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strtrim crée une nouvelle chaine a partir de "s1" sans certains caractères 
spécifié (chaine "set"). Les caractères doivent se trouver en début et/ou en 
fin de chaine, ils peuvent être dans n'importe quel ordre, nombre...
Retourne cette chaine.
*/

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*tab;
	// On créee une nouvelle chaine + 1 variable pour stocker la taille de la chaine 
	// d'origine
	// Si s1 ou set est vide on retorune NULL.
	if (!s1 || !set)
		return (NULL);
	// Traitement début de chaine:
	// On déplace le pointeur de s1 temps qu'on est pas au caractère d'arrêt et temps 
	// que ft_strchr ne nous retourne pas NULL (qui veut dire que les caractere sont différents).
	while (*s1 != '\0' && ft_strchr(set, *s1) != NULL)
	//printf("Adresse: %p\n", ft_strchr(set, *s1));
		s1++;
	// On stocke la taille de s1 avec le pointeur décalé.
	len = ft_strlen(s1);
	//printf("Longueur s1 avec début trimé: %lu\n", len);
	// Traitement fin de chaine:
	// On utilise ft_strchr a partir de la fin de la chaine et on itere len vers 0 jusqu'à
	// ce qu'on est un retour à 0.
	// On obtient alors len comme valeur de fin de chaine "trimée"
	while (len > 0 && ft_strchr(set, s1[len]))
		len--;
	/* 
	On utilise ft_substr pour "creer" une nouvelle chaine avec allocation mémoire.
	On passe:
	- s1 trimmée
	- Start à 0 car on copie tout
	- En taille len + caractère d'arrêt.
	*/
	tab = ft_substr((char *)s1, 0, len + 1);
	// On retourne notre nouvelle chaine.
	return (tab);
}

/*int main(void)
{
	char *s1 = "*K*Y*YMa chaine a trimerY*KKKK";
	char const *set = "Y*K";
	printf("Ma chaine non trimée: %s\n", s1);
	printf("Ma nouvelle chaine: %s\n", ft_strtrim(s1, set));
	
}*/
