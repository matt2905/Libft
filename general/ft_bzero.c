/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:18:17 by mmartin           #+#    #+#             */
/*   Updated: 2015/01/27 12:52:17 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*save;

	i = -1;
	save = s;
	while (++i < n)
		save[i] = '\0';
}
