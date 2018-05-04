/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:12:55 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/29 23:25:06 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int index;

	index = 0;
	if (s1 != 0 && s2 != 0)
	{
		if (ft_strlen(s1) != ft_strlen(s2))
			return (0);
		while (s1[index] != '\0')
		{
			if (s1[index] != s2[index])
				return (0);
			else
				index++;
		}
		return (1);
	}
	return (0);
}
