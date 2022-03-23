/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 09:27:03 by awora             #+#    #+#             */
/*   Updated: 2022/03/15 22:49:25 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem -> content = content;
	new_elem -> next = NULL;
	return (new_elem);
}
#include <stdio.h>
int main(void)
{
	t_list *liste;
	liste = ft_lstnew("jeff");
	printf("%s\n", liste->content);
}
