/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 19:07:54 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/29 11:21:22 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa_isneg(int *n, int *neg)
{
	*neg = 0;
	if (*n < 0)
	{
		*n *= -1;
		*neg = 1;
	}
}

static char	*assignement(char *str, int len, int n)
{
	while (n > 0)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		tmpn;
	int		neg;
	int		len;
	char	*str;

	tmpn = n;
	len = 1;
	itoa_isneg(&n, &neg);
	while (tmpn /= 10)
		len++;
	len += neg;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == (-2147483648))
		return (ft_strdup("-2147483648"));
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	if (neg == 1)
		str[0] = '-';
	str[len--] = '\0';
	str = assignement(str, len, n);
	return (str);
}
