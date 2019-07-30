/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:57:48 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/30 09:43:54 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static	int	count(char **tmp, char **line)
{
	int		i2;
	char	*new;

	i2 = 0;
	while ((*tmp)[i2] != '\n' && (*tmp)[i2] != '\0')
		i2++;
	if ((*tmp)[i2] == '\n')
	{
		*line = ft_strsub(*tmp, 0, i2);
		new = ft_strdup(*tmp + i2 + 1);
		free(*tmp);
		*tmp = new;
	}
	else
	{
		*line = ft_strdup(*tmp);
		ft_strdel(tmp);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	char			*buf;
	static char		*tmp;
	int				rd;
	char			*som;

	rd = 0;
	if (tmp == NULL)
		tmp = ft_strnew(0);
	buf = ft_strnew(BUFF_SIZE);
	if (read(fd, buf, 0) < 0 || !line || fd < 0)
		return (-1);
	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		som = ft_strjoin(tmp, buf);
		free(tmp);
		tmp = som;
		if (ft_strchr(tmp, '\n'))
			break ;
	}
	free(buf);
	if (rd == 0 && (tmp == NULL || tmp[0] == '\0'))
		return (0);
	return (count(&tmp, line));
}
