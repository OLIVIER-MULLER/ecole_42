/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:57:04 by omuller           #+#    #+#             */
/*   Updated: 2022/10/31 13:35:36 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check si le caractère passé en paramètre est alphabétique. Majuscules et 
minuscules comprises.
Retourne 1 si oui.
Retourne 2 si non.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
