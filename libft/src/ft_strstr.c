/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 02:12:02 by abrichar          #+#    #+#             */
/*   Updated: 2016/12/02 02:15:31 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *foin, const char *aiguille)
{
	int		index;
	int		index2;
	char	*pos;

	pos = (char *)foin;
	index = 0;
	index2 = 0;
	if (aiguille[0] == '\0')
		return (char*)(foin);
	while (foin[index] != '\0')
	{
		while (foin[index] == aiguille[index2] && aiguille[index2] != '\0')
		{
			index++;
			index2++;
		}
		if (aiguille[index2] == '\0')
		{
			index -= ft_strlen(aiguille);
			return (&pos[index]);
		}
		index = index - index2 + 1;
		index2 = 0;
	}
	return (0);
}
