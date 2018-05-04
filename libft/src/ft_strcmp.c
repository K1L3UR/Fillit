/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 02:31:16 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/25 01:31:06 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int				index;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	index = 0;
	while (str1[index] == str2[index] && str1[index] != '\0'
		&& str2[index] != '\0')
		index++;
	if (str1[index] == '\0' && str2[index] == '\0')
		return (0);
	else
		return ((str1[index] - str2[index]));
}
