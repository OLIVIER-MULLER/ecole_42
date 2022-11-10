/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:57:03 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 18:28:34 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La fonction recherche un caractère dans une chaine.
Retourne l'adresse de ce caractère si elle le trouve.
Retourne NULL si le caractère n'est pas présent.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	// On recrée la chaine 's' que l'on appelle 'str' car 's' est const (read only).
	// On cast obligatoirement en (unsigned char *).
	str = (unsigned char *)s;
	i = 0;
	// On boucle jusqu'à la limite n et temps que les caractères sont différents.
	while (i < n && str[i] != (unsigned char)c)
		i++;
	// Retourne NULL si on est arrivé à la limite.
	if (i == n)
		return (NULL);
	// Retourne l'adresse (casté void)
	return ((void *)&str[i]);
}
