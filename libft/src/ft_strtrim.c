/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 13:17:45 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/29 11:46:20 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_relen(int length)
{
	if (length < 0)
		return (0);
	else
		return (length);
}

char		*ft_strtrim(char const *s)
{
	int		index;
	char	*strnew;
	int		length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	while (s[length - 1] == ' ' || s[length - 1] == '\n'
		|| s[length - 1] == '\t')
		length--;
	index = 0;
	while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
	{
		length--;
		index++;
	}
	length = ft_relen(length);
	if ((strnew = (char *)malloc(sizeof(char) * (length + 1))) == NULL)
		return (0);
	s += index;
	index = -1;
	while (++index < length)
		strnew[index] = *s++;
	strnew[index] = '\0';
	return (strnew);
}
