/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bswarm <bswarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 12:52:52 by bswarm            #+#    #+#             */
/*   Updated: 2021/04/21 11:22:30 by bswarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != ch && str[i])
		i++;
	if (str[i] == ch)
		return ((char *)str + i);
	return (0);
}
