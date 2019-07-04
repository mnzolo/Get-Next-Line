/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 15:57:48 by mnzolo            #+#    #+#             */
/*   Updated: 2019/07/04 13:29:51 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	count(char	*tmp)
{
	int i2;

	i2 = 0;
	while (tmp[i2] != '\n' && tmp[i2] != '\0')
		i2++;
	return(i2);
}
static char *remove(char *tmp)
{
	if (tmp[count(tmp)] == '\n' || tmp[count(tmp)] == '\0')
		ft_strcpy(tmp, tmp + count(tmp) + 1);
	return (tmp);
}

int		get_next_line(const int fd, char **line)
{
	char			*buf;
	static char		*tmp;
	int				rd;
	int				i;
	char 			*som;

	rd = 0;
	i =	0;
	buf = ft_strnew(BUFF_SIZE);
	if (BUFF_SIZE == 0)
		return (0);
	if (tmp == NULL)
		tmp = ft_strnew(0);
	while ((rd = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rd] = '\0';
		som = ft_strjoin(tmp, buf);
		free(tmp);
		tmp = ft_strdup(som);
		free(som);
	}
	i = count(tmp);
	*line = ft_strsub(tmp, 0, i);
	tmp = remove(tmp);
	return (1);
	if (read(fd, buf, BUFF_SIZE) < 0 || fd < 0)
		return (-1);
	return (0);
}
