/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:44:01 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 18:49:19 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
memcmp suit le même principe que strcmp. Elle compare deux chaines.
sauf : 
- ne compare pas le caractère d'arrêt car on ne compare pas forcément des char.
- utilise des void car on peut comparer ce qu'on veut (int, char...)
- size_t n sert a définir le nombre de bytes comparés. (Nb d'itérations a faire)
*/

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
		// On recrée 2 pointeurs sur s1 et s2 casté en unsigned char. 
		// On recrée i pour itérer avec un size_t. 
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
		// On assigne le tout. Les 2 void sont castés.
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
		// On itère en fonction du n passé en argument
	while (i < n)
	{
		// Si les bytes sont différents on compare. Sinon on continue.
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
		// Si tout est similaire on retourne 0.
	return (0);
}
/*
int main(void)
{
	char	b[] = "12345";
	char	c[] = "12";
	printf("%d\n",ft_memcmp(b, c, sizeof(char) * 5));
}
*/
