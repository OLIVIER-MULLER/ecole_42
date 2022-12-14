/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:42:02 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 15:44:58 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Change le caractère passé en parametre en minuscule.
Retourne le caractère modifié.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (c += 32);
	else
		return (c);
}
