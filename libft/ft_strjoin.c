/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:56:13 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/04 11:52:08 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*j;
	int		i;
	int		g;

	i = 0;
	g = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	if (!(j = (char*)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	while (s1[i])
	{
		j[i] = s1[i];
		i++;
	}
	while (s2[g] != '\0')
	{
		j[i] = s2[g];
		i++;
		g++;
	}
	j[i] = '\0';
	return (j);
}
