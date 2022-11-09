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

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len > 0)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}

/*int main()
{
char str[100] = "Ma string est longue";

ft_memset(str, 48, 8 * sizeof(char));
printf("Apres memset(): %s\n", str);
return 0;
}*/
