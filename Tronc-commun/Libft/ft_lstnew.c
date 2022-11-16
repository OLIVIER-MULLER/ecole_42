/*  */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:10:23 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 19:10:59 by Olivier          ###   ########.fr       */
/*                                                                            */
/*  */
/*
	Crée une liste avec une structure.
*/
#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*list;
		// Création et allocation de la taille d'une struct
	list = malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
		// On assigne content à content
	list->content = content;
		// On assigne NUll a next
	list->next = NULL;
	return (list);
}
/*
int		main(void)
{
	char	str[] = "lorem ipsum dolor sit";
	t_list	*list;

	list = ft_lstnew((void *)str);
	printf("Contenu : %s\n", (char *)list->content);
	printf("Next : %s\n", (char *)list->next);
}
*/