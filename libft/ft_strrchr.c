/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:08:56 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/28 08:03:12 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				a;
	char			c2;
	char			*s2;

	a = 0;
	c2 = (char)c;
	s2 = (char *)s;
	if (c2 == '\0')
	{
		return (s2 + ft_strlen(s2) + a);
	}
	a = ft_strlen(s2);
	while (s2[a--] != c2 && a >= 0)
	{
		if (s2[a] == c2)
		{
			return (s2 + a);
		}
	}
	return (NULL);
}
