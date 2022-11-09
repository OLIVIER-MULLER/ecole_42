/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:33:24 by omuller           #+#    #+#             */
/*   Updated: 2022/11/09 12:31:27 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	first_part;
	size_t	s1_size;

	first_part = 0;
	s1_size = ft_strlen(s1);
	while (s1[first_part] != '\0' && is_in_set(s1[first_part], set))
		first_part++;
	while (s1_size > first_part && is_in_set(s1[s1_size - 1], set))
		s1_size--;
	trimmed = malloc(sizeof(char) * (s1_size - first_part + 1));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (first_part < s1_size)
		trimmed[i++] = s1[first_part++];
	trimmed[i] = 0;
	return (trimmed);
}
