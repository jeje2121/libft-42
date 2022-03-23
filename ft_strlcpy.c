/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:12:00 by awora             #+#    #+#             */
/*   Updated: 2022/03/03 20:01:31 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	size_t	i;
	size_t	lenstr;

	lenstr = ft_strlen(src);
	i = 0;
	if (!dest && !src)
		return (0);
	if (maxlen == 0)
		return (lenstr);
	while (src[i] != '\0' && i < maxlen - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lenstr);
}
