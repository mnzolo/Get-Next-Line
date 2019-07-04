/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:26:15 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/16 15:42:57 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)s;
	if (s2 == 0)
	{
		return ;
	}
	while (s2[i] != '\0')
	{
		ft_putchar(s2[i]);
		i++;
	}
}
