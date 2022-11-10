/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:55:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 16:20:52 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction localise la PREMIERE occurrence de "c"  dans la chaine "s".
Retourne l'adresse ou nulle si il n'est pas localisé.
Le caractère de fin '/0' peut faire partie des caractères possibles.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	// On recrée la chaine 's' que l'on appelle 'str' car 's' est const (read only).
	// On cast obligatoirement en (char *).
	str = (char *)s;
	// On itère sur la nouvelle chaine et on compare chaque caractère.
	// Dès que le caractère correspond on retourne l'adresse avec &.
	while (str[i] != '\0')
	{
		if (str[i] == (char)c) // On convertit c pour comparer des données similaires.
			return (&str[i]);
		i++;
	}
	// Ici on check le dernier caractère ('\0') si le while n'a rien donné.
	if ((char)c == str[i])
		return (&str[i]);
	return (NULL);
}