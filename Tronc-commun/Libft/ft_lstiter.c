/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:53:46 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:53:54 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Itère sur la liste ’lst’ et applique la fonction
// ’f’ au contenu chaque élément.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		// On execute la fonction sur lst
		f(lst->content);
		// On change le pointeur par le suivant
		lst = lst->next;
	}
}
