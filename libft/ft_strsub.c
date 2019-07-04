/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:53:00 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/04 12:30:38 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	i;
	size_t	p;

	p = 0;
	if (s == 0)
		return (NULL);
	if (!(j = (char*)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	i = start;
	len = len + start;
	while (i < len)
	{
		j[p] = s[i];
		p++;
		i++;
	}
	j[p] = '\0';
	return (j);
}
