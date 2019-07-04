/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:21:30 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/27 08:55:24 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	c2;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	c2 = (unsigned char)c;
	while (i < n)
	{
		a[i] = b[i];
		while (b[i] == c2)
		{
			a[i] = b[i];
			i++;
			return (a + i);
		}
		i++;
	}
	return (NULL);
}
