/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:55:10 by awora             #+#    #+#             */
/*   Updated: 2022/03/03 20:03:23 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t maxlen)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = 0;
	j = destlen;
	if (maxlen == 0)
		return (srclen);
	if (maxlen < destlen)
		return (maxlen + srclen);
	while (src[i] && (destlen + i) < maxlen)
		dest[j++] = src[i++];
	if ((destlen + i) == maxlen && destlen < maxlen)
		dest[--j] = '\0';
	else
		dest[j] = '\0';
	return (srclen + destlen);
}
