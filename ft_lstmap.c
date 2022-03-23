/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:23:57 by awora             #+#    #+#             */
/*   Updated: 2022/02/28 16:24:00 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	t_list	*new_el;
	t_list	*tmp;

	new_el = 0;
	while (lst != 0)
	{
		tmp = ft_lstnew(f(lst->content));
		if (tmp == 0)
		{
			del(lst->content);
			return (tmp);
		}
		lst = lst->next;
		ft_lstadd_back(&new_el, tmp);
	}
	return (new_el);
}
