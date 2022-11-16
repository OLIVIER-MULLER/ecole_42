/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:41:27 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:42:35 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstadd_front permet de mettre un nouvel élément en se servant d'une variable
// "next"

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	// On fait pointer new sur next.
	// Sur la même ligne, on change immédiatement l'adresse du nouvel élément (new)
	//en y mettant l'adresse du premier élément 
	new->next = *lst;
	// On fait pointer l'élémnet new au debut de la liste
	*lst = new;
}
