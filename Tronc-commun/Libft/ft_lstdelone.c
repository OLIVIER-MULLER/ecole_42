/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:52:32 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:52:41 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Supprime un élément et le free.
// Next n'est pas touché

#include "libft.h"
//#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != NULL && lst != NULL)
	{
		del((*lst).content);
		free(lst);
		lst = NULL;
	}
}
/*
void	*del(t_list *lst)
{
	lst->content = 0;
	return (0);
}

int main(void)
{
	t_list *lst;
	char *content = "Moncontenu";

	lst = ft_lstnew((void *)content);
	printf("Mon contenu crée: %s\n",(char *)lst->content);
	ft_lstdelone(lst, del(lst));
	printf("Mon contenu après effacement: %s\n", (char *)lst->content);
	return (0);
}
*/
