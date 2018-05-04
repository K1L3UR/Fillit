/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:22:31 by abrichar          #+#    #+#             */
/*   Updated: 2016/12/05 18:52:23 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	if (s1 != 0 && s2 != 0)
	{
		while (index < n && s1[index] != '\0' && s2[index] != '\0')
		{
			if (s1[index] != s2[index])
				return (0);
			index++;
		}
		if (index == n || (s1[index] == '\0' && s2[index] == '\0'))
			return (1);
	}
	return (0);
}
