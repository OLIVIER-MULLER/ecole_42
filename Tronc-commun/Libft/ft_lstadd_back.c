/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:51:56 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:52:08 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// ft_lstadd_back permet de mettre un nouvel élément en se servant d'une variable
// "next" et "temp"

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	// Si la liste était vide on la complète avec le nouvel élément.
	if (*lst == NULL)
		*lst = new;
	else
	{
	// On stocke le dernier élément dans la variable temp
		temp = ft_lstlast(*(lst));
	// On fait pointer new dans le "next" du dernier élément (stocké dans tmp)
		temp->next = new;
	}
}
