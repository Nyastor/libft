/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 13:27:52 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:42 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	if (!str)
		return (0);
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i--;
	}
	return (0);
}
