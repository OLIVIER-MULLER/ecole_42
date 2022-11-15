/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:03:42 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 18:31:58 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strjoin alloue de la mémoire a une nouvelle chaine et y copie 2 chaines const 
concaténées. A la différence de ft_strcat, on part sur une nouvelle chaine 
(Car nos deux chaines sont const). Donc on alloue de la mémoire.
*/

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;
		// Création d'un char * et de 2 varaibles pour itérer.
	i = 0;
	j = 0;
		// Si l'une des 2 chaines est vide on retourne NULL.
	if (!s1 || !s2)
		return (NULL);
		// On alloue en memoire: Les deux tailles de chaines + le caractère d'arrêt. 
		// Ici la taille de chaque byte est de la taille du type de *tab
	tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
		// Si l'allocation échoue on retourne NULL.
	if (tab == 0)
		return (NULL);
		// On ajoute S1
	while (s1[i] != '\0')
	{
		tab[i] = s1[i];
		i++;
	}
		// On ajoute S1
	while (s2[j] != '\0')
	{
		tab[i] = s2[j];
		j++;
		i++;
	}
		// On ajoute le caractère d'arrêt.
	tab[i] = '\0';
		// On retourne la nouvelle chaine.
	return (tab);
}
/*
int main(void)
{
	char	s1[] = "Mondebut";
	char	s2[] = "+mafin";

	printf("Ma nouvelle string: %s\n",ft_strjoin(s1, s2));
}
*/
