/*  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:16:47 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 15:16:55 by Olivier          ###   ########.fr       */
/*                                                                            */
/*  */

#include "libft.h"
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tab;

	i = 0;
	// Si la chaine ou la fonction sont null on retourne NULL
	if (!s || !f)
		return (NULL);
	// On alloue la taille de la chaine + 1
	tab = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	// Echec: retourne 0
	if (tab == 0)
		return (NULL);
	// On réecrit la chaine en applicant la fonction sur chaque char
	while (s[i])
	{
		// On modifie le tableau avec la fonction
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
char function(unsigned int i, char str)
{
	printf("Ma fonction: index = %d and %c\n", i, str);
 	return str - 32;
}

int main()
{
 	char *str = "olivier";
 	printf("Mon prénom est %s\n", str);
 	char *result = ft_strmapi(str, function);
 	printf("Mon prénom en majuscule est %s\n", result);
 	return 0;
}
*/