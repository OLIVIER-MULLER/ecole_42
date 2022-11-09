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

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n && str[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&str[i]);
}
