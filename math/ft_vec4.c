/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 19:47:12 by mmartin           #+#    #+#             */
/*   Updated: 2016/01/25 19:50:01 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec4	ft_cross_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	ret;

	ret.x = (a.y * b.z) - (a.z * b.x);
	ret.y = (a.z * b.x) - (a.x * b.z);
	ret.z = (a.x * b.y) - (a.y * b.x);
	ret.w = 1;
	return (ret);
}

float	ft_dot_vec4(t_vec4 a, t_vec4 b)
{
	float	ret;

	ret = (a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w);
	return (ret);
}

t_vec4	ft_sub_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	ret;

	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	ret.z = a.z - b.z;
	ret.w = a.w - b.w;
	return (ret);
}

t_vec4	ft_add_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	ret;

	ret.x = a.x + b.x;
	ret.y = a.y + b.y;
	ret.z = a.z + b.z;
	ret.w = a.w + b.w;
	return (ret);
}

t_vec4	ft_mul_vec4(t_vec4 a, float b)
{
	t_vec4	ret;

	ret.x = a.x * b;
	ret.y = a.y * b;
	ret.z = a.z * b;
	ret.w = a.w * b;
	return (ret);
}
