/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:31:08 by omuller           #+#    #+#             */
/*   Updated: 2022/11/05 15:40:06 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Change le caractère passé en parametre en majuscule.
Retourne le caractère modifié.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (c - 32);
	else
		return (c);
}
