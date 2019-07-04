/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 17:21:53 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/25 11:42:48 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*fresh;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	if (s == 0)
		return (NULL);
	k = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i == ft_strlen(s))
		k++;
	while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
		k--;
	j = 0;
	if (!(fresh = (char *)malloc(sizeof(char) * (k - i + 2))))
		return (NULL);
	while (j < (k - i + 1))
	{
		fresh[j] = s[i + j];
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
