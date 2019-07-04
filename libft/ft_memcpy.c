/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:08:54 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/27 08:58:11 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*a;
	char			*b;

	a = (char *)dst;
	b = (char *)src;
	i = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
