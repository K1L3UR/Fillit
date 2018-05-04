/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strexcept.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:46:25 by abrichar          #+#    #+#             */
/*   Updated: 2016/12/06 15:02:18 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strexcept(char *str, char c)
{
	char	*new_str;
	int		length;
	int		index;

	if (!str)
		return (0);
	if (!c)
		return (str);
	length = ft_strlen(str);
	if (!(new_str = (char *)malloc(sizeof(char) * length + 1)))
		return (0);
	index = 0;
	while (index < length && str[index] != c)
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
