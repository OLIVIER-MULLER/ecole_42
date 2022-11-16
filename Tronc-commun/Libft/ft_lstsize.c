/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:56:40 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:56:56 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Compte le nobre d'éléments dans la liste.
On change le pointeur de lst avec le pointeur next (le suivant).
On incrémente une variable à chaque tour temps que lst ne retourne pas NULL.
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
