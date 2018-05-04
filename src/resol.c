/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resol.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 16:14:02 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/08 10:57:41 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_reset_pos(int *pos, int max, int min)
{
	while (++min < max)
		pos[min] = 0;
}

int		ft_resol(t_tetri *tetri, int ntetri)
{
	char	*map;
	int		size;
	int		tab[4];

	tab[0] = ntetri;
	tab[1] = 0;
	size = 2;
	map = NULL;
	map = init_map(map, size);
	ft_backtracking(tetri, size, map, tab);
	return (1);
}

void	ft_backtracking2(t_tetri *tab_struct, char **map, int *tab, int *pos)
{
	tab[2] = (tab[3] * (tab[3] + 1));
	while (pos[tab[1]] < tab[2] && tab[1] < tab[0])
	{
		if (check_tetri(tab_struct[tab[1]], *map, tab[3], pos[tab[1]]) == 0)
			pos[tab[1]]++;
		else
		{
			add_tetri(tab_struct[tab[1]], *map, tab[3], pos[tab[1]]);
			++tab[1];
		}
	}
}

void	ft_backtracking(t_tetri *tab_struct, int size, char *map, int *tab)
{
	int		pos[tab[0]];

	tab[3] = size;
	ft_reset_pos(pos, tab[0], -1);
	while (tab[1] < tab[0])
	{
		ft_backtracking2(tab_struct, &map, tab, pos);
		if (tab[1] >= tab[0])
			break ;
		if (pos[tab[1]] >= tab[2] && tab[1] != 0)
		{
			pos[tab[1]] = 0;
			--tab[1];
			ft_clear_map(map, tab_struct[tab[1]].letter);
			++pos[tab[1]];
		}
		else
		{
			++tab[3];
			ft_reset_pos(pos, tab[0], -1);
			tab[1] = 0;
			map = init_map(map, tab[3]);
		}
	}
	ft_display_map(map);
}
