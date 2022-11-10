/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omuller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:34:05 by omuller           #+#    #+#             */
/*   Updated: 2022/11/06 14:48:20 by omuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;
	/*
	Creation de 3 variables:
	- i pour itérer
	- sign pour stocker le signe de l'int retourné à la fin
	- result pour stocker le resultat a retourner à la fin
	*/

	i = 0;
	sign = 1;
	result = 0;
	// On incrémente i temps que les char sont les caractères spéciaux ci apres
	while (str[i] == ' ' || ((9 <= str[i]) && (str[i] <= 13)))
		i++;
	// Si on tombe sur un char + (Retour positif on ne fait rien)
	if (str[i] == '+')
		i++;
	// Si on tombe sur un char - (Retour negatif on passe sign en negatif)
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	// Temps que les char suivant sont des chiffres on itère
	while (str[i] && ('0' <= str[i]) && (str[i] <= '9'))
	{
		// On ajoute a result chaque char convertit en int.
		// Result * 10 permet d'ecrire les dizaines, centaines, milliers etc etc...
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	// On retourne le résultat avec son signe
	return (sign * result);
}
