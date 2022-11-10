/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:55:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 16:41:11 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction localise la DERNIERE occurrence de "c"  dans la chaine "s".
Retourne l'adresse ou nulle si il n'est pas localisé.
Le caractère de fin '/0' peut faire partie des caractères possibles.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*last_address;

	i = 0;
	// On recrée la chaine 's' que l'on appelle 'str' car 's' est const (read only).
	// On cast obligatoirement en (char *).
	str = (char *)s;
	last_address = NULL;
	/*On itère sur la nouvelle chaine et on compare chaque caractère.
	Dès que le caractère correspond on écrit l'adresse du caractère
	correspondant dqns last_adress.
	Si un autre caractère correspond on écrase l'adresse de last_adress avec la
	nouvelle adresse.
	A la fin on a donc l'adresse du dernier caractè qui est stockée. 
	*/
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			last_address = &str[i];
		i++;
	}
	// Ici on check le dernier caractère ('\0') si le while n'a rien donné.
	if ((char)c == str[i])
		last_address = &str[i];
	return (last_address);
}
