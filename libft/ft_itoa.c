/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnzolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:29:31 by mnzolo            #+#    #+#             */
/*   Updated: 2019/06/28 09:38:48 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(int n)
{
	int	len;
	int	x;

	len = 0;
	x = 0;
	if (n < 0 || n == 0)
		len++;
	while (n != 0)
	{
		x = n % 10;
		n = n / 10;
		len++;
	}
	return (len);
}

static char		*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	*h;

	j = 0;
	i = ft_strlen(s);
	h = (char *)malloc(sizeof(char) * (i + 1));
	while (i != 0)
	{
		h[j] = s[i - 1];
		j++;
		i--;
	}
	h[j] = '\0';
	return (h);
}

static char		*change(int n, char *fresh, int q)
{
	int	z;
	int	i;

	i = 0;
	z = 0;
	if (n < 0)
	{
		fresh[q - 1] = '-';
		n = n * -1;
		q--;
	}
	while (i < q)
	{
		z = n % 10;
		fresh[i] = z + '0';
		n = n / 10;
		i++;
	}
	fresh[++i] = '\0';
	return (fresh);
}

char			*ft_itoa(int n)
{
	int		i;
	char	*fresh;
	int		q;
	int		z;

	z = 0;
	i = 0;
	q = count(n);
	if (!(fresh = (char *)malloc(sizeof(char) * (count(n) + 1))))
		return (NULL);
	if (n == -2147483648)
	{
		fresh = ft_strdup("-2147483648");
		return (fresh);
	}
	if (n == 0)
	{
		fresh = ft_strdup("0");
		return (fresh);
	}
	fresh = ft_strrev(change(n, fresh, q));
	return (fresh);
}
