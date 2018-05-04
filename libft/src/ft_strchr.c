/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:38:49 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:41:43 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uns_c;
	char			*strsrc;

	strsrc = (char *)s;
	uns_c = (unsigned char)c;
	while (strsrc[0] != uns_c)
	{
		if (strsrc[0] == '\0')
			return (0);
		strsrc++;
	}
	return ((char *)strsrc);
}
