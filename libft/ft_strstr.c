/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:13:49 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/27 14:21:29 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	j;
	char			*h;
	char			*n;

	i = 0;
	j = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[i] == '\0')
		return (h);
	while (h[i] != '\0')
	{
		j = 0;
		while (n[j] == h[i + j])
		{
			j++;
			if (n[j] == '\0')
				return (h + i);
		}
		i++;
	}
	return (NULL);
}
