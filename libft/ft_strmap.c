/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:48:27 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/17 13:06:22 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*s2;
	char			*j;

	i = 0;
	s2 = (char *)s;
	if (s2 == NULL)
		return (NULL);
	if (!(j = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		j[i] = f(s2[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
