/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 01:21:10 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/25 01:21:55 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int nombre_ok;

	index = 0;
	nombre_ok = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			nombre_ok++;
		index++;
	}
	return (nombre_ok);
}
