/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:31:09 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:40 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		c = 0;
		k = 0;
		while (little[c] == big[i + k] && little[c] && (i + k) < len)
		{
			k++;
			c++;
			if (!little[c])
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}
