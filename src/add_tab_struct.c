/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_tab_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:39:14 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/12 18:21:22 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	add_tab_struct2(char *buf, int count,
						t_tetri *tab_struct, char letter_to_put)
{
	int		index;
	int		count_diese;

	index = 0;
	count_diese = 0;
	tab_struct[count].letter = letter_to_put;
	while (buf[index] != '\0' && buf[index] && count_diese != 4)
	{
		if (buf[index] == '#')
		{
			tab_struct[count].pos[count_diese] = index;
			count_diese++;
		}
		index++;
	}
}

t_tetri		*add_tab_struct(int fd, int count)
{
	t_tetri	*tab_struct;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	letter_to_put;

	letter_to_put = 'A';
	tab_struct = (t_tetri*)malloc(sizeof(t_tetri) * (count + 1));
	count = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		add_tab_struct2(buf, count, tab_struct, letter_to_put);
		letter_to_put++;
		count++;
	}
	return (tab_struct);
}
