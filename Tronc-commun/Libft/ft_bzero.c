/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:25:57 by omuller           #+#    #+#             */
/*   Updated: 2022/11/04 16:48:29 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char str[100] = "Ma string est longue";
	
	ft_bzero(str, 8 * sizeof(char));
	printf("Apres memset(): %s\n", str);
	return (0);
}*/
