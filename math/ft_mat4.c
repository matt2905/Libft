/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mat4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:17:27 by mmartin           #+#    #+#             */
/*   Updated: 2016/02/15 13:06:41 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_math.h"

t_mat4		ft_add_mat4(t_mat4 a, t_mat4 b)
{
	t_mat4	ret;

	ret.a.x = a.a.x + b.a.x;
	ret.a.y = a.a.y + b.a.y;
	ret.a.z = a.a.z + b.a.z;
	ret.a.w = a.a.w + b.a.w;
	ret.b.x = a.b.x + b.b.x;
	ret.b.y = a.b.y + b.b.y;
	ret.b.z = a.b.z + b.b.z;
	ret.b.w = a.b.w + b.b.w;
	ret.c.x = a.c.x + b.c.x;
	ret.c.y = a.c.y + b.c.y;
	ret.c.z = a.c.z + b.c.z;
	ret.c.w = a.c.w + b.c.w;
	ret.d.x = a.d.x + b.d.x;
	ret.d.y = a.d.y + b.d.y;
	ret.d.z = a.d.z + b.d.z;
	ret.d.w = a.d.w + b.d.w;
	return (ret);
}

t_mat4		ft_sub_mat4(t_mat4 a, t_mat4 b)
{
	t_mat4	ret;

	ret.a.x = a.a.x - b.a.x;
	ret.a.y = a.a.y - b.a.y;
	ret.a.z = a.a.z - b.a.z;
	ret.a.w = a.a.w - b.a.w;
	ret.b.x = a.b.x - b.b.x;
	ret.b.y = a.b.y - b.b.y;
	ret.b.z = a.b.z - b.b.z;
	ret.b.w = a.b.w - b.b.w;
	ret.c.x = a.c.x - b.c.x;
	ret.c.y = a.c.y - b.c.y;
	ret.c.z = a.c.z - b.c.z;
	ret.c.w = a.c.w - b.c.w;
	ret.d.x = a.d.x - b.d.x;
	ret.d.y = a.d.y - b.d.y;
	ret.d.z = a.d.z - b.d.z;
	ret.d.w = a.d.w - b.d.w;
	return (ret);
}

t_mat4		ft_mul_mat4(t_mat4 a, t_mat4 b)
{
	t_mat4	ret;

	ret.a.x = a.a.x * b.a.x + a.a.y * b.b.x + a.a.z * b.c.x + a.a.w * b.d.x;
	ret.a.y = a.a.x * b.a.y + a.a.y * b.b.y + a.a.z * b.c.y + a.a.w * b.d.y;
	ret.a.z = a.a.x * b.a.z + a.a.y * b.b.z + a.a.z * b.c.z + a.a.w * b.d.z;
	ret.a.w = a.a.x * b.a.w + a.a.y * b.b.w + a.a.z * b.c.w + a.a.w * b.d.w;
	ret.b.x = a.b.x * b.a.x + a.b.y * b.b.x + a.b.z * b.c.x + a.b.w * b.d.x;
	ret.b.y = a.b.x * b.a.y + a.b.y * b.b.y + a.b.z * b.c.y + a.b.w * b.d.y;
	ret.b.z = a.b.x * b.a.z + a.b.y * b.b.z + a.b.z * b.c.z + a.b.w * b.d.z;
	ret.b.w = a.b.x * b.a.w + a.b.y * b.b.w + a.b.z * b.c.w + a.b.w * b.d.w;
	ret.c.x = a.c.x * b.a.x + a.c.y * b.b.x + a.c.z * b.c.x + a.c.w * b.d.x;
	ret.c.y = a.c.x * b.a.y + a.c.y * b.b.y + a.c.z * b.c.y + a.c.w * b.d.y;
	ret.c.z = a.c.x * b.a.z + a.c.y * b.b.z + a.c.z * b.c.z + a.c.w * b.d.z;
	ret.c.w = a.c.x * b.a.w + a.c.y * b.b.w + a.c.z * b.c.w + a.c.w * b.d.w;
	ret.d.x = a.d.x * b.a.x + a.d.y * b.b.x + a.d.z * b.c.x + a.d.w * b.d.x;
	ret.d.y = a.d.x * b.a.y + a.d.y * b.b.y + a.d.z * b.c.y + a.d.w * b.d.y;
	ret.d.z = a.d.x * b.a.z + a.d.y * b.b.z + a.d.z * b.c.z + a.d.w * b.d.z;
	ret.d.w = a.d.x * b.a.w + a.d.y * b.b.w + a.d.z * b.c.w + a.d.w * b.d.w;
	return (ret);
}

float		*ft_to_array(t_mat4 src)
{
	float	*ret;

	ret = ft_memalloc(sizeof(*ret) * 16);
	ret[0] = src.a.x;
	ret[1] = src.a.y;
	ret[2] = src.a.z;
	ret[3] = src.a.w;
	ret[4] = src.b.x;
	ret[5] = src.b.y;
	ret[6] = src.b.z;
	ret[7] = src.b.w;
	ret[8] = src.c.x;
	ret[9] = src.c.y;
	ret[10] = src.c.z;
	ret[11] = src.c.w;
	ret[12] = src.d.x;
	ret[13] = src.d.y;
	ret[14] = src.d.z;
	ret[15] = src.d.w;
	return (ret);
}
