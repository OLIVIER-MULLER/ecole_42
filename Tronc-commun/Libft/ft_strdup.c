/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:14:26 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 15:09:58 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
ft_strdup crée une copie de chaine (qui n'existait pas avant).
- Crée une chaine s2
- Alloue la memoire necessaire (la même que s1)
- Copie s1 sur s2 et retourne s2
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	size;
	// crée une chaine s2 et une size qui correspond a s1 + '\0'
	size = ft_strlen(s1) + 1;
	// Alloue la même mémoire que s1
	s2 = (char *)malloc((size) * sizeof(char));
	// En cas d'echec, retourne NULL
	if (!s2)
		return (NULL);
	// Fait la copie de s1 sur s2
	(void)ft_memcpy(s2, s1, size);
	// Retourne s2
	return (s2);
}
