/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:52:45 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:34 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ldst;
	size_t	i;
	size_t	k;

	ldst = ft_strlen(dst);
	k = ldst;
	if (ldst < size - 1 && size > 0)
	{
		i = 0;
		while (src[i] && ldst + i < size - 1)
		{
			dst[k] = src[i];
			k++;
			i++;
		}
		dst[k] = '\0';
	}
	if (ldst >= size)
		ldst = size;
	return (ldst + ft_strlen(src));
}
