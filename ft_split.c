/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:59:51 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/22 12:52:59 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_res(const char *s, size_t st, size_t i)
{
	char	*res;
	size_t	sc;

	res = (char *)malloc(sizeof(char) * (i - st + 2));
	if (!res)
		return (0);
	sc = 0;
	while (st + sc < i + 1)
	{
		res[sc] = s[sc + st];
		sc++;
	}
	res[sc] = '\0';
	return (res);
}

char	**ft_writeres(char **res, char const *s, char c, size_t i)
{
	int		fl;
	size_t	k;
	size_t	st;

	fl = 0;
	k = 0;
	st = 0;
	while (s[i])
	{
		if (s[i] != c && fl == 0)
		{
			st = i;
			fl = 1;
		}
		if ((s[i + 1] == '\0' || s[i + 1] == c) && fl == 1)
		{
			res[k] = ft_res(s, st, i);
			fl = 0;
			k++;
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	k;
	int		fl;

	i = 0;
	fl = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && fl == 0 && s[i])
		{
			k++;
			fl = 1;
		}
		if (s[i] == c)
			fl = 0;
		i++;
	}
	res = (char **)malloc(sizeof(char *) * (k + 1));
	if (!res)
		return (0);
	res = ft_writeres(res, s, c, 0);
	res[k] = '\0';
	return (res);
}
