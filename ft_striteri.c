/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:00:38 by awora             #+#    #+#             */
/*   Updated: 2022/03/15 22:39:07 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

void f(unsigned int i, char *c)
{
	*c -= 32;
}
#include <stdio.h>
int main(void)
{
	char str1[] = "jeffrey";
	ft_striteri(str1, f);
	printf("%s\n", str1);
}
