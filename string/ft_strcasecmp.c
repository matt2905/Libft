/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/05 12:29:40 by mmartin           #+#    #+#             */
/*   Updated: 2016/02/05 12:30:36 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcasecmp(char c1, char c2)
{
	if (ft_islower(c1) && ft_isupper(c2))
		return (c1 - (c2 + 32));
	if (ft_isupper(c1) && ft_islower(c2))
		return ((c1 + 32) - c2);
	return (c1 - c2);
}

int			ft_strcasecmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (ft_charcasecmp(s1[i], s2[i]))
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (ft_charcasecmp(s1[i], s2[i]));
}
