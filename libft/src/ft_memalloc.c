/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 23:01:39 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:35:59 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	index;

	index = 0;
	if ((ptr = malloc(size)) == NULL)
		return (NULL);
	while (index < size)
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
