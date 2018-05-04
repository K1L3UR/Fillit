/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 21:32:06 by abrichar          #+#    #+#             */
/*   Updated: 2016/11/24 21:58:10 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *next;

	lst = *alst;
	while (lst != NULL)
	{
		next = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = next;
	}
	*alst = NULL;
}
