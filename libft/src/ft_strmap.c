/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:53:34 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:44:29 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		index;
	char	*newstr;
	int		length;

	if (s != 0)
	{
		length = ft_strlen(s);
		if (!(char *)malloc(sizeof(char) * length + 1))
			return (0);
		newstr = (char *)malloc(sizeof(char) * length + 1);
		index = 0;
		while (index < length)
		{
			newstr[index] = f(s[index]);
			index++;
		}
		newstr[index] = '\0';
		return (newstr);
	}
	return (0);
}
