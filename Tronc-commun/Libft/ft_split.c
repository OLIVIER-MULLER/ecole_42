/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Olivier <omuller@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:30:45 by Olivier           #+#    #+#             */
/*   Updated: 2022/11/09 14:30:59 by Olivier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static char	**malloc_error(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}
		// nb_words compte le nombre de mots obtenu en les comptant entre
		// chaque séparateur
static size_t	nb_words(char const *s, char c)
{
	size_t	i;
	size_t	nb_words;

	if (!s[0])
		return (0);
	i = 0;
	nb_words = 0;
	// On boucle et on incrémente i temps qu'on est pas au caractere d'arrêt et et temps 
	// que le caractère de la chaine est égal au séparateur
	while (s[i] && s[i] == c)
		i++;
	// Apres le séparateur, on boucle temps qu'on est pas à la fin de la chaine.
	while (s[i])
	{
		//////////// Si le caractere est égal au séparateur:
		if (s[i] == c)
		{
			// - On incrémente nb_words
			nb_words++;
			// - On incrémente i temps que le caractère de la chaine est égal au séparateur
			while (s[i] && s[i] == c)
				i++;
			// - On est arrivé au séparateur ou a la fin de chaine.
			// - On recommence directement au début
			continue ;
		}
		//////////// Si le caractère est différent du séparateur on incrémente
		i++;
	}
		// Si le dernier caractere est different du separateur on incrémente encore une fois.
	if (s[i - 1] != c)
		nb_words++;
	return (nb_words);
}

		// Attention : **next_word est le pointeur de la chaine totale et *next_word 
		// est le pointeur de chaque mot 
static void	get_next_word(char **next_word, size_t *next_word_len, char c)
{
	size_t	i;
		// On decale l'index de next_word de la longueur du mot d'avant
	*next_word += *next_word_len;
		// On remet a zero
	*next_word_len = 0;
	i = 0;
		// On itere next_word si on est au split et pas a la fin de chaine
	while (**next_word != '\0' && **next_word == c)
		(*next_word)++;
		// On boucle temps qu'on est pas à la fin de notre nouvelle chaine (Tout le reste)
	while ((*next_word)[i] != '\0')
	{
		// Si l'arrêt s'est fait avec le split (et non la fin de chaine) on stoppe.
		if ((*next_word)[i] == c)
			return ;
		// Si l'arrêt s'est fait avec la fin de chaine 
		// On incrémente une derniere fois next_word_len
		(*next_word_len)++;
		// On itère i
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*next_word;
	size_t	next_word_len;
	size_t	i;

	// On crée un pointeur de chaine **tab (Un tableau de chaine (mots))
	// On crée une chaine *next_word
	// Si la chaine s est nulle on retourne NULL
	if (!s)
		return (NULL);
	// On alloue de la memoire à tab qui correspond au nombre de mots + caractère d'arrêt.
	tab = (char **)malloc(sizeof(char *) * (nb_words(s, c) + 1));
	// Si echec, on retrourne NULL.
	if (!tab)
		return (NULL);
	i = 0;
	// On assigne la chaine s à next_word
	next_word = (char *)s;
	// On assigne une taille de 0 à next_word_len
	next_word_len = 0;
	// On itere autant de fois qu'il y a de mots
	while (i < nb_words(s, c))
	{
	// On crée chaque mot en passant les adresses car on va modifier les valeurs (pointeurs)
	// Get next_word modifie le pointeur d'un morceau de chaine et modifie la variable de taille
		get_next_word(&next_word, &next_word_len, c);
	// On alloue un index en fonction de la taille du morceau de chaine
		tab[i] = (char *)malloc(sizeof(char) * (next_word_len + 1));
	// Si echec on free tous les index et on retrounre 0 avec la fonction malloc_error
		if (!tab[i])
			return (malloc_error(tab));
	// On copie notre bout de chaine à l'index en cours
		ft_strlcpy(tab[i], next_word, next_word_len + 1);
	// On itère
		i++;
	}
	// On ferme notre tableau avec NULL
	tab[i] = NULL;
	// On retrourne notre tableau 
	return (tab);
}
/*
int main(void)
{
	char const *s = "Ma*string*a*spliter";
	char c = '*';
	printf("Ma string de retour index 0: %s\n",(ft_split(s, c))[0]);
	printf("Ma string de retour index 1: %s\n",(ft_split(s, c))[1]);
	printf("Ma string de retour index 2: %s\n",(ft_split(s, c))[2]);
	printf("Ma string de retour index 3: %s\n",(ft_split(s, c))[3]);
}
*/
