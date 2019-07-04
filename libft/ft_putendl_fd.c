/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 12:52:06 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/25 10:45:55 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = (char *)s;
	if (s2 == NULL)
		return ;
	while (s2[i] != '\0')
	{
		ft_putchar_fd(s2[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
