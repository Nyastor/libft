/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:59:24 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:39 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (*s1 && *s2 && *s1 == *s2 && n - 1)
	{
		n--;
		++s1;
		++s2;
	}
	if (*s1 > *s2)
		return (1);
	else
		if (*s1 < *s2)
			return (-1);
	return (0);
}
