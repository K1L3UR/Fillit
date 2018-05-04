/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_fd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 15:38:25 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/12 18:23:10 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	verif_fd2(char *buf, int *index, int *count_link
						, int countdiese)
{
	while (buf[(*index)])
	{
		if ((*index) % 5 != 4 && buf[(*index)] != '.' && buf[(*index)] != '#'
			&& (*index) != 20)
			return (-1);
		else if (buf[(*index)] != '\n' && (*index) % 5 == 4)
			return (-1);
		if (buf[(*index)] == '#')
		{
			if (buf[(*index) + 1] == '#')
				++*count_link;
			if (buf[*index + 5] == '#')
				++*count_link;
			if (buf[*index - 1] == '#')
				++*count_link;
			if (buf[*index - 5] == '#')
				(*count_link)++;
			countdiese++;
		}
		(*index)++;
	}
	if ((((*count_link) == 6) || (*count_link) == 8) && countdiese == 4)
		return (1);
	return (-1);
}

int			verif_fd(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		index;
	int		count;
	int		count_link;

	count = 0;
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if ((buf[0]) == '\0')
			return (-1);
		buf[ret] = '\0';
		index = 0;
		count_link = 0;
		if (verif_fd2(buf, &index, &count_link, 0) == -1)
			return (-1);
		if (count_link < 6)
			return (-1);
		count++;
	}
	if (buf[20] != '\0')
		return (-1);
	return (count);
}
