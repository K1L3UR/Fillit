/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:05:32 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:44:42 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*newstr;
	unsigned int	length;

	if (s != 0)
	{
		length = ft_strlen(s);
		if (!((char *)malloc(sizeof(char) * length + 1)))
			return (0);
		newstr = (char *)malloc(sizeof(char) * length + 1);
		index = 0;
		while (index < length)
		{
			newstr[index] = f(index, s[index]);
			index++;
		}
		newstr[index] = '\0';
		return (newstr);
	}
	return (0);
}
