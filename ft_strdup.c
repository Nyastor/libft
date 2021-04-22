/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:11:58 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:32 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strdup;
	size_t	i;

	if (!str)
		return (0);
	strdup = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (!strdup)
		return (0);
	i = 0;
	while (str[i])
	{
		strdup[i] = str[i];
		i++;
	}
	strdup[i] = 0;
	return (strdup);
}
