/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:54:54 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:23:11 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	k;

	result = (char *)malloc(sizeof(*s) * (len + 1));
	if (!result)
		return (0);
	i = 0;
	k = 0;
	while (s[i])
	{
		if (i >= start && k < len)
		{
			result[k] = s[i];
			k++;
		}
		i++;
	}
	result[k] = 0;
	return (result);
}
