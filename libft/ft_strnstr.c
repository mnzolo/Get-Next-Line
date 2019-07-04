/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:54:37 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/27 15:22:21 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;
	char	*x;
	char	*y;

	i = 0;
	j = 0;
	x = (char *)h;
	y = (char *)n;
	if (y[j] == '\0')
		return (x);
	while (x[i] != '\0' && i < len)
	{
		j = 0;
		while (x[i + j] == n[j] && (i + j) < len)
		{
			j++;
			if (y[j] == '\0')
				return ((char *)x + i);
		}
		i++;
	}
	return (NULL);
}
