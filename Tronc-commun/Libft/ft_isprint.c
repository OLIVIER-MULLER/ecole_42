/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:47:41 by omuller           #+#    #+#             */
/*   Updated: 2022/11/04 13:52:40 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check si le caractère passé en paramètre est un caractère imprimable.
Retourne 1 si oui.
Retourne 2 si non.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
