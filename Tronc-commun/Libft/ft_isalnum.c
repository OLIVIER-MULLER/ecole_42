/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:17:48 by omuller           #+#    #+#             */
/*   Updated: 2022/10/31 12:19:50 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check si le caractère passé en paramètre est alphabétique & numérique.
Utilise nos 2 fonctions précédemmment créees. 
Retourne 1 si oui.
Retourne 2 si non.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
