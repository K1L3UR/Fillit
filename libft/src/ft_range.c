/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 01:17:20 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/25 01:35:07 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int	*tableau;
	int	len;
	int	nbr;
	int	index;

	if (max <= min)
		return (0);
	len = max - min;
	tableau = (int*)malloc(sizeof(int) * len);
	if (tableau == NULL)
		return (0);
	nbr = min;
	index = 0;
	while (nbr < max)
	{
		tableau[index] = nbr;
		nbr++;
		index++;
	}
	return (tableau);
}
