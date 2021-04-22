/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:10:12 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:21 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;

	if (!arr)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(arr + i) == (unsigned char)c)
			return ((unsigned char *)arr + i);
		i++;
	}
	return (0);
}
