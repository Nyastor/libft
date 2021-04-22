/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:21:07 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:23:01 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	end;
	size_t	start;
	size_t	i;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_strchr(set, s1[start]) != 0 && start <= end)
		start++;
	while (start <= end && ft_strchr(set, s1[end]) != 0)
		end--;
	res = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!res)
		return (0);
	i = 0;
	while (i < end - start + 1)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
