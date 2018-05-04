/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:50:23 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:46:02 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	size_t	index1;
	size_t	index2;
	char	*pos;

	pos = (char *)foin;
	index1 = 0;
	index2 = 0;
	while (foin[index1] != '\0' && index1 < len)
	{
		while (foin[index1] == aiguille[index2] && aiguille[index2] != '\0'
			&& index1 < len)
		{
			index1++;
			index2++;
		}
		if (aiguille[index2] == '\0')
		{
			index1 -= ft_strlen(aiguille);
			return (&pos[index1]);
		}
		index1 -= index2;
		index2 = 0;
		index1++;
	}
	return (0);
}
