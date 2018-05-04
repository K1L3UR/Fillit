/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:10:56 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/29 23:24:59 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_assignement(char *strnew,
							char const *s2, int index1, int index2)
{
	while (s2[index2] != '\0')
	{
		strnew[index1] = s2[index2];
		index1++;
		index2++;
	}
	strnew[index1] = '\0';
	return (strnew);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		index1;
	int		index2;
	char	*strnew;
	int		length;

	index1 = 0;
	index2 = 0;
	if (s1 != 0 && s2 != 0)
	{
		length = ft_strlen(s1) + ft_strlen(s2);
		if (!(char *)malloc(sizeof(char) * length + 1))
			return (0);
		strnew = (char *)malloc(sizeof(char) * length + 1);
		while (s1[index1] != '\0')
		{
			strnew[index1] = s1[index1];
			index1++;
		}
		strnew = ft_assignement(strnew, s2, index1, index2);
		return (strnew);
	}
	return (0);
}
