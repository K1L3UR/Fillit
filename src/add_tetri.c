/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/18 14:52:30 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/12 18:27:01 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	add_tetri(t_tetri tetrimino, char *map, int size, int index)
{
	int		max;
	int		i;

	i = 1;
	max = (size * (size + 1));
	while (i < 4)
	{
		map[index] = tetrimino.letter;
		if ((tetrimino.pos[i] - tetrimino.pos[i - 1]) != 1)
			index += tetrimino.pos[i] - tetrimino.pos[i - 1] + (size - 4);
		else
			index += tetrimino.pos[i] - tetrimino.pos[i - 1];
		i++;
	}
	map[index] = tetrimino.letter;
}

int		check_tetri(t_tetri tetrimino, char *map, int size, int index)
{
	int		max;
	int		i;

	i = 0;
	max = (size * (size + 1));
	if (map[index] != '.')
		return (0);
	i++;
	while (i < 4)
	{
		if ((tetrimino.pos[i] - tetrimino.pos[i - 1]) != 1)
			index += tetrimino.pos[i] - tetrimino.pos[i - 1] + (size - 4);
		else
			index += tetrimino.pos[i] - tetrimino.pos[i - 1];
		if (map[index] != '.' || index >= max)
			return (0);
		i++;
	}
	return (1);
}
