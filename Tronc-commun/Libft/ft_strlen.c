/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:40 by omuller           #+#    #+#             */
/*   Updated: 2022/11/04 14:39:27 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Strlen calcule la taille d'une chaine sans prendre en compte le caractère d'arrêt.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	// On boucle jusqu'au caractère d'arrêt 
	while (s[i] != '\0')
	{
		// + 1 a chaque tour
		i++;
	}
	// Retourne le nombre d'itération et donc la taille
	return (i);
}
