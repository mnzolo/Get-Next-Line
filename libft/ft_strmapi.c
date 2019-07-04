/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:49:11 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/17 13:07:03 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	char	*s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s2 = (char *)s;
	if (s2 == NULL || f == 0)
		return (NULL);
	if (!(p = (char *)malloc(sizeof(char) * (ft_strlen(s2) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		p[j] = f(i, s2[i]);
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
