/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 12:23:02 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/03 14:42:55 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	big_main(int fd, char *str, int count, t_tetri *tab_struct)
{
	int		i;

	i = 0;
	if (!(count == -1))
	{
		if (close(fd) == -1)
		{
			ft_putstr("Erreur dans la fermeture du fichier");
			return (-1);
		}
		if ((fd = open(str, O_RDONLY)) == -1)
		{
			ft_putstr("Erreur dans l'ouverture du fichier");
			return (-1);
		}
		tab_struct = add_tab_struct(fd, count);
		ft_resol(tab_struct, count);
		if (close(fd) == -1)
		{
			ft_putstr("Erreur dans la fermeture du fichier");
			return (-1);
		}
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int		fd;
	int		count;
	t_tetri	*tab_struct;

	tab_struct = NULL;
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file");
		return (-1);
	}
	if ((fd = open(argv[1], O_RDONLY)) < 0 || read(fd, 0, 0) != 0)
	{
		ft_putstr("Erreur dans l'ouverture du fichier");
		return (-1);
	}
	count = verif_fd(fd);
	if (big_main(fd, argv[1], count, tab_struct) == -1)
		return (-1);
	if (count == -1)
		ft_putstr("error\n");
	return (0);
}
