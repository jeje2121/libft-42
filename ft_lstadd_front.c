/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:01:44 by awora             #+#    #+#             */
/*   Updated: 2022/03/15 22:54:10 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int main(void)
{
	t_list liste;
	liste = ft_lstnew("ach");
	liste->next = ft_lstnew("jeff");
	ft_lstadd_front(&liste,liste->next->next);

	while(liste)
	{
		printf("%s\n", liste)
	}
}
