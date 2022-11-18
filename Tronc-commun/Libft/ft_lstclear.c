/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:53:09 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:53:23 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Supprime un élément et les suivants.
// On passe l'élément initial a 0.

#include "libft.h"
//#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*temp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}

void	*del(t_list *lst)
{
	lst->content = NULL;
	return (0);
}
/*
int	main(void)
{
	t_list *lst1;
	t_list *lst2;

	char *content1 = "Mon contenu 1";
	char *content2 = "Mon contenu 2";

	lst1 = malloc(sizeof(*lst1));
	lst2 = malloc(sizeof(*lst2));
	if (lst1 == NULL)
		return (0);
	if (lst2 == NULL)
		return (0);
	lst1->content = content1;
	lst2->content = content2;


	lst1->next = lst2->content;
	lst2->next = NULL;

	printf("Mon contenu 1 crée: %s\n",(char *)lst1->content);
	printf("Mon contenu 2 crée: %s\n",(char *)lst2->content);
	printf("Mon contenu depuis next: %s\n",(char *)lst1->next);

	ft_lstclear((t_list **)lst2, del(lst2));

	printf("Mon contenu 1 après effacement (idem): %s\n",(char *)lst1->content);
	printf("Mon contenu 2 après effacement (a null): %s\n",(char *)lst2->content);

	return (0);
}
*/