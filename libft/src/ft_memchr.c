/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:20:44 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:36:28 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;
	unsigned char	uns_c;

	uns_c = (unsigned char)c;
	ptr = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (ptr[index] == uns_c)
			return (ptr + index);
		index++;
	}
	return (0);
}
