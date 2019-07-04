/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:54:25 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/02 10:50:21 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	string(char *c, char z)
{
	int		count;
	int		x;

	x = 0;
	count = 0;
	while (c[x] == z)
		x++;
	while (c[x] != '\0')
	{
		if (x == 0 && c[x] != z)
			count++;
		if (c[x] != z && c[x - 1] == z)
			count++;
		x++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**fresh;
	int		p;
	int		i;
	int		q;
	char	*s2;

	p = 0;
	i = -1;
	s2 = (char *)s;
	if (s2 == 0)
		return (0);
	if (!(fresh = (char **)malloc(sizeof(char *) * (string(s2, c) + 1))))
		return (NULL);
	while (++i < string(s2, c))
	{
		while (s2[p] == c)
			p++;
		q = p;
		while (s2[p] != c && s2[p] != '\0')
			p++;
		fresh[i] = ft_strsub(s2, q, p - q);
		p++;
	}
	fresh[i] = NULL;
	return (fresh);
}
