/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:05:55 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/23 04:42:02 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int index;
	int length;

	index = 0;
	if (s != 0)
	{
		length = ft_strlen(s);
		while (index < length)
		{
			s[index] = '\0';
			index++;
		}
	}
}
