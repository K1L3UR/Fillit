/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 22:01:06 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:37:27 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*strdest;
	unsigned char	*strsrc;

	strdest = (unsigned char *)dest;
	strsrc = (unsigned char *)src;
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
		while (n > 0)
		{
			strdest[n - 1] = strsrc[n - 1];
			n--;
		}
	return (dest);
}
