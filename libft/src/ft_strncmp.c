/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 02:35:34 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/25 01:31:17 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (str1[index] == '\0' && str2[index] == '\0')
			return (0);
		else if (str1[index] == str2[index])
			index++;
		else if (str1[index] > str2[index])
			return (str1[index] - str2[index]);
		else
			return (str1[index] - str2[index]);
	}
	return (0);
}
