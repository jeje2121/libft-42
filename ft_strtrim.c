/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialgac <ialgac@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:44:11 by ialgac            #+#    #+#             */
/*   Updated: 2022/03/03 20:27:39 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	slen = ft_strlen(s1);
	while (slen && ft_strchr(set, s1[slen]))
		--slen;
	return (ft_substr(s1, 0, slen + 1));
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
  char *s;
  s = ft_strtrim("", "123");
  printf("%s\n", s);
}
*/
