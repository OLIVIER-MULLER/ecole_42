/*  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:26:51 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 15:27:01 by Olivier          ###   ########.fr       */
/*                                                                            */
/*  */

//ft_striteri transmet l'adresse de chaque caractère pour pouvoir le modifier.

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
			return;
			// On itere en passant a la fonction le i et l'adresse de chaque char
		while (s[i] != '\0')
		{
			f(i, s + i);
			i++;
		}
}
/*
void function(unsigned int i, char *s)
{
	printf("L'adresse du char n°%d est: %p et la valeur est:%s\n", i, &s + i, s);
	char *s2 = "olivier";
	// On change chaque char
	*s = *(s2 + i);
	// Marche aussi sans passer par l'adresse de s2 car on est dans le scope.
	// *s = s2[i];
	printf("L'adresse du char n°%d est: %p et la valeur est:%s\n", i, &s + i, s);
}
int main(void)
{
 	char str[] = "OLIVIER";
 	printf("Avant modification de la chaine %s\n", str);
 	ft_striteri(str, function);
	printf("Après modification de la chaine %s\n", str);
 	return 0;
}
*/