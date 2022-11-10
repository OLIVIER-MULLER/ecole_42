/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:14:33 by omuller           #+#    #+#             */
/*   Updated: 2022/11/04 13:36:04 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check si le caractère passé en paramètre est un caractère décimal (ascii).
Retourne 1 si oui.
Retourne 2 si non.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	return (0);
}
