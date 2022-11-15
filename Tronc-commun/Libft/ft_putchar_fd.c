/* *************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:23:51 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 15:24:02 by Olivier          ###   ########.fr       */
/*                                                                            */
/* *************************************************************************/

// Permet d'ecrire un char

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main ()
{
    char letter = 'A';
    ft_putchar_fd(letter, 2);
    return(0);
}
*/