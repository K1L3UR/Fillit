/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 01:14:29 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/25 01:35:22 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sort_params(int argc, char **argv)
{
	int		index;
	char	*buff;

	index = 1;
	while (argc > index + 1)
	{
		if (ft_strcmp(argv[index], argv[index + 1]) > 0)
		{
			buff = argv[index];
			argv[index] = argv[index + 1];
			argv[index + 1] = buff;
			index = 0;
		}
		index++;
	}
	index = 1;
	while (argc > index)
	{
		ft_putstr(argv[index]);
		ft_putchar('\n');
		index++;
	}
	return (0);
}
