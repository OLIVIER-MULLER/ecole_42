/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:53:56 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 14:54:05 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_itoa change un int en une chaine de char

#include "libft.h"
//#include <stdio.h>

char	*ft_swap(char *tab, int size)
{
	int		temp;
	int		i;
	int		j;

	i = 0;
	j = size - 1;
	if (tab[i] == '-')
		i++;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
	return (tab);
}
	// On crée un tableau avec le char 0 + '\0'
char	*ft_is_zero(char *tab)
{
	int	i;

	i = 0;
	tab[i++] = '0';
	tab[i] = '\0';
	return (tab);
}
	// Retourne la taille de l'int
int	ft_size(int nb)
{
	int	size;
	// On commence à 1 pour le caractère '\0'
	size = 1;
	// On passe les int positifs en negatif. Si négatif on ajoute 1.
	if (nb >= 0)
		nb *= -1;
	else
		size++;
	// On incrémente a chaque fois qu'on peut diviser par 10
	while (nb <= -10)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	long	nb;
	int		size;
		
	i = 0;
	// On assigne la longueur de l'int a size
	size = ft_size(n);
	// On assigne l'int a nb
	nb = n;
	// On a crée une nouvelle chaine, on alloue la memoire size + 1
	tab = (char *)malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (0);
	// On crée une chaine avec le char '0'
	if (nb == 0)
		return (ft_is_zero(tab));
	// Ecriture du signe négatif en char + 1 itération
	if (nb < 0)
	{
		nb = -nb;
		tab[i++] = '-';
	}
	// On ecrit le int chiffre en char (Modulo puis division par 10)
	while (nb != 0)
	{
		tab[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	// On ecrit le caractere d'arrêt
	tab [i] = '\0';
	// On renvoie le tableau inversé pour remettre dans l'ordre.
	return (ft_swap (tab, ft_strlen(tab)));
}
/*
int main(void)
{
	int n = -3249;
	printf("Ma chaine de char: %s\n", ft_itoa(n));
}
*/
