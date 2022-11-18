/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:54:06 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:54:16 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*newlst(t_list *new_lst, t_list *lst, void *(*f)(void *)
							, void (*del)(void *))
{
	t_list	*add;

	add = ft_lstnew(f(lst->content));
	if (add == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	ft_lstadd_back(&new_lst, add);
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (lst == NULL)
		return (NULL);
		//On crée une nouvelle liste avec la fonction ft_lstnew
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == NULL)
		return (NULL);
		// On deplace le pointeur sur la liste suivante
	lst = lst->next;
	while (lst)
	{
		newlst(new_lst, lst, f, del);
		lst = lst->next;
	}
	return (new_lst);
}
