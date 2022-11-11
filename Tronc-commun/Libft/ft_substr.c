/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 14:20:08 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 17:02:21 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_substr cree et retourne une nouvelle chaine (sous chaine). Elle est créee a partir
de la chaine source s mais commence a un index précis de la chaine s (start).
*/

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	new_len;
	// On cree un pointeur pour la nouvelle chaine (sous chaine) et une variable pour 
	// nouvelle taille
	// Si s est null on retourne NULL
	if (s == NULL)
		return (NULL);
	// Si la taille de la chaine s est plus petite que start on 
	// retourne une chaine vide avec ft_strdup
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	// On assigne la taille de la sous chaine a newlen en la calculant a partir de 
	// s mais en decalant le pointeur sur start
	new_len = ft_strlen(&s[start]);
	// Si la sous chaine est plus petite que la taille maxi passée en paramètre,
	// on change la taille maxi len. Ca devient la taille de la sous chaine.
	if (new_len < len)
		len = new_len;
	// On alloue de la memoire a la nouvelle chaine (new_str) en char et de 
	// taille len + 1 (Pour le '\0')
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	// Si echec retourne NULL
	if (!new_str)
		return (NULL);
	// On copie avec strlcpy
	ft_strlcpy(new_str, &s[start], len + 1);
	return (new_str);
}
/*
int main(void)
{
	char const s[] = "mastringautop";
	unsigned int start = 8;
	size_t len = 5;
	printf("Ma nouvelle string: %s\n", ft_substr(s, start, len));
}
*/