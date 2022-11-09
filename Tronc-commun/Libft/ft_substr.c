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

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	new_len;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(&s[start]);
	if (new_len < len)
		len = new_len;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, &s[start], len + 1);
	return (new_str);
}
/*int main(void)
{
	char const s[] = "mastringdecaracteres";
	unsigned int start = 15;
	size_t len = 3;
	printf("Ma nouvelle string: %s\n", ft_substr(s, start, len));
}*/
