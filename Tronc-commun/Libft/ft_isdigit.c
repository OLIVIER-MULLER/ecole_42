/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:13:04 by omuller           #+#    #+#             */
/*   Updated: 2022/10/31 12:21:09 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check si le caractère passé en paramètre est numérique. 
Retourne 1 si oui.
Retourne 2 si non.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
