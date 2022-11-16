/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:55:41 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:55:52 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Renvoie le dernier élément de la liste.
Si la liste n'est pas nulle. 
On boucle temps que le pointeur next ne retourne pas 0.
On change le pointeur de lst avec le suivant.
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
