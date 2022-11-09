/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 08:50:43 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 10:14:52 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	int				j;
	char			*src;
	char			*search;
	size_t			limit;

	src = (char *)haystack;
	search = (char *)needle;
	limit = len;
	if (!*needle)
		return (src);
	i = 0;
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i] == search[j] && src[i] != '\0' && i < limit)
		{
			i++;
			j++;
		}
		if (!search[j])
			return (&src[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}
