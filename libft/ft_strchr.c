/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:41:15 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/27 14:06:45 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	b;
	char	*s2;

	i = 0;
	b = (char)c;
	s2 = (char *)s;
	if (b == '\0')
	{
		return (s2 + ft_strlen(s2) + i);
	}
	while (s2[i] != '\0')
	{
		if (s2[i] == b)
		{
			return (s2 + i);
		}
		i++;
	}
	return (NULL);
}
