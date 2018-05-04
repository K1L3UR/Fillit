/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:41:10 by abrichar          #+#    #+#             */
/*   Updated: 2016/12/05 18:04:27 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *s, char c)
{
	int	compteur;
	int	substring;

	if (s == 0)
		return (0);
	substring = 0;
	compteur = 0;
	while (*s != '\0')
	{
		if (substring == 1 && *s == c)
			substring = 0;
		if (substring == 0 && *s != c)
		{
			substring = 1;
			compteur++;
		}
		s++;
	}
	return (compteur);
}

static int	ft_wlen(const char *s, char c)
{
	int	len;

	if (s == 0)
		return (0);
	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nbre_word;
	int		index;

	index = 0;
	nbre_word = ft_cmp((const char *)s, c);
	if (!(t =
		(char **)malloc(sizeof(*t) * (ft_cmp((const char *)s, c) + 1))))
		return (0);
	while (nbre_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_wlen(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}
