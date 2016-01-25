/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 19:43:01 by mmartin           #+#    #+#             */
/*   Updated: 2016/01/25 19:46:18 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec3	ft_cross_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	ret;

	ret.x = (a.y * b.z) - (a.z * b.x);
	ret.y = (a.z * b.x) - (a.x * b.z);
	ret.z = (a.x * b.y) - (a.y * b.x);
	return (ret);
}

float	ft_dot_vec3(t_vec3 a, t_vec3 b)
{
	float	ret;

	ret = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
	return (ret);
}

t_vec3	ft_sub_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	ret;

	ret.x = a.x - b.x;
	ret.y = a.y - b.y;
	ret.z = a.z - b.z;
	return (ret);
}

t_vec3	ft_add_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	ret;

	ret.x = a.x + b.x;
	ret.y = a.y + b.y;
	ret.z = a.z + b.z;
	return (ret);
}

t_vec3	ft_mul_vec3(t_vec3 a, float b)
{
	t_vec3	ret;

	ret.x = a.x * b;
	ret.y = a.y * b;
	ret.z = a.z * b;
	return (ret);
}
