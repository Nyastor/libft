/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 12:53:50 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/22 16:09:04 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_mod(long long int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_writeres(char *res, int c, int n, int flag)
{
	res[c] = '\0';
	while (c > 0)
	{
		c--;
		res[c] = (ft_mod(n) % 10) + 48;
		n = n / 10;
	}
	if (flag == -1)
		res[c] = '-';
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		tmp;
	int		flag;
	int		c;

	flag = 1;
	c = 0;
	if (n < 0)
	{
		c++;
		flag = -1;
	}
	tmp = n;
	if (n == 0)
		c++;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		c++;
	}
	res = (char *)malloc(sizeof(char) * (c + 1));
	if (!res)
		return (0);
	res = ft_writeres(res, c, n, flag);
	return (res);
}
