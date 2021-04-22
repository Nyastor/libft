/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 20:07:39 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:22 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	while (n--)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		++b1;
		++b2;
	}
	return (0);
}
