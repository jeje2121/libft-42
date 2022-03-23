/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awora <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:25:27 by awora             #+#    #+#             */
/*   Updated: 2022/03/15 22:45:23 by awora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_numlen(int n)
{
	unsigned int	len;
	long			m;

	m = n;
	len = 0;
	if (m < 0)
	{
		len++;
		m *= -1;
	}
	while (m > 9)
	{
		m /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	long	nbr;
	char	*buffer;
	int		mysign;

	i = ft_numlen(n);
	nbr = n;
	mysign = 0;
	buffer = (char *)malloc(sizeof(char) * ft_numlen(n) + 1);
	if (buffer == NULL)
		return (0);
	if (nbr < 0)
	{
		mysign = 1;
		nbr *= -1;
	buffer[0] = '-';
	}
	buffer[i] = '\0';
	while (i-- > mysign)
	{
		buffer[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (buffer);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(--123++));
}
