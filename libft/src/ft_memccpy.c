/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:44:46 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:36:15 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*strdest;
	unsigned char	*strsrc;
	unsigned char	c_char;

	strdest = ((unsigned char *)dest);
	strsrc = ((unsigned char *)src);
	c_char = ((unsigned char)c);
	index = 0;
	while (index < n)
	{
		strdest[index] = strsrc[index];
		if (strsrc[index] == c_char)
			return (&strdest[index + 1]);
		index++;
	}
	return (0);
}
