/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 22:19:40 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:46:18 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *found;
	const char *p;

	c = (unsigned char)c;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	found = 0;
	while ((p = ft_strchr(s, c)) != 0)
	{
		found = p;
		s = p + 1;
	}
	return ((char *)found);
}
