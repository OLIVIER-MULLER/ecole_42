/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:57:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 14:47:05 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_calloc: 'Clear-memory-ALLOCation'
- Initialise une chaine et lui alloue de la memoire de taille size (sizeof(char) par exemple) 
- En nombre défini par count
- Elle clear aussi le tout en écrivant des 0 (avec ft_bzero)
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
// Initialisation et alloue avec malloc 
	str = (char *)malloc(count * size);
// Retour NULL si echec 
	if (!str)
		return (NULL);
// Ecriture des zeros sur la chaine
	ft_bzero(str, count * size);
	return (str);
}
