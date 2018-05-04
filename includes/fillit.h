/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 11:10:28 by abrichar          #+#    #+#             */
/*   Updated: 2017/04/12 18:28:10 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/includes/libft.h"
# include <stdio.h>
# include <time.h>
# define BUF_SIZE 21

typedef struct	s_tetri
{
	int		pos[4];
	char	letter;
	char	padding[7];
}				t_tetri;

t_tetri			*add_tab_struct(int fd, int count);
int				check_tetri(t_tetri tetrimino, char *map, int size, int index);
int				main(int argc, char **argv);
char			*init_map(char *map, int size);
void			ft_display_map(char *map);
void			ft_clear_map(char *map, char to_delete);
void			ft_reset_pos(int *pos, int max, int min);
void			ft_backtracking(t_tetri *tab_struct, int size, char *map
		, int *tab);
int				ft_resol(t_tetri *tab_struct, int nb_tetri);
int				verif_fd(int fd);
void			int_to_zero(int *nb1, int *nb2, int *nb3);
void			add_tetri(t_tetri tetrimino, char *map, int size, int index);

#endif
