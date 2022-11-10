/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:51:43 by omuller           #+#    #+#             */
/*   Updated: 2022/11/04 16:22:47 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Memset écrit des bytes 
- Sur une chaine existante.
- De valeur "int c" => ex: 0 pour le caractère d'arrêt, 65 pour le A...
- Au nombre de "size_t len" => ex : sizeof(char) * 5 

Puis retourne cette même chaine.
*/
//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	// On crée une chaine str en char. 
	char	*str;
	// On lui assigne la même adresse que b. (Mais str étant casté en char on peut 
	// travailler avec... On ne peut pas avec un void.)
	str = b;
	// On itère le nombre de fois spécifié par len.
	while (len > 0)
	{
		// *str est le premier char (str[0]). On y ecrit c.
		*str = (unsigned char)c;
		// On se deplace d'un char (+1) (str[1]). Et on reboucle.... 
		str++;
		// On décrémente la size de 1 car on vient de faire 1 char.
		len--;
	}
	// On renvoie la chaine passée en argument. Celle ci a été modifiée car str prenait
	// son adresse.
	return (b);
}
/*
int main(void)
{
		char	b[] = "123456789";
	ft_memset(b, 67, sizeof(char) * 5);
	printf("%hhd\n",b[4]);
	printf("%s\n",b);
}
*/