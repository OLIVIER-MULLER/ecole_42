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
Memset écrit dans la chaine b, le caractère c, un nombre de fois précis (len).
Retourne cette même adresse.
*/
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	// On crée la chaine str avec la chaine reçue en paramètre.
	str = b;
	// On itère le nombre de fois spécifié par len.
	while (len > 0)
	{

		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}
int main(void)
{
		void	*str = "fkfjfjfdj";
	printf("%s\n",ft_memset(str, 0, 10));
}