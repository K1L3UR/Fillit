/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_with_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 17:30:42 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/04 16:56:06 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*init_map(char *map, int size)
{
	int	check;
	int index;
	int max;

	index = 0;
	check = size;
	ft_memdel((void**)&map);
	max = (size * (size + 1));
	map = (char*)malloc(sizeof(char) * max);
	while (index < max)
	{
		if (index == check)
		{
			map[index] = '\n';
			check += (size + 1);
		}
		else
			map[index] = '.';
		index++;
	}
	map[max - 1] = '\0';
	return (map);
}

void	ft_display_map(char *map)
{
	int index;

	index = 0;
	while (map[index] != '\0')
	{
		ft_putchar(map[index]);
		index++;
	}
	ft_putchar('\n');
}

void	ft_clear_map(char *map, char to_delete)
{
	int index;

	index = 0;
	while (map[index] != '\0')
	{
		if (map[index] == to_delete)
			map[index] = '.';
		index++;
	}
}
