/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 08:39:19 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/28 09:36:55 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = ft_strlen(dst);
	if (len > dstsize)
	{
		return (ft_strlen(src) + dstsize);
	}
	if (len < dstsize)
	{
		ft_strncat(dst, src, dstsize - ft_strlen(dst) - 1);
	}
	return (ft_strlen(src) + len);
}
