/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/25 19:40:17 by mmartin           #+#    #+#             */
/*   Updated: 2016/01/26 13:55:48 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

typedef struct	s_vec4
{
	float		x;
	float		y;
	float		z;
	float		w;
}				t_vec4;

typedef struct	s_mat4
{
	t_vec4		a;
	t_vec4		b;
	t_vec4		c;
	t_vec4		d;
}				t_mat4;

typedef struct	s_vec3
{
	float		x;
	float		y;
	float		z;
}				t_vec3;

typedef struct	s_mat3
{
	t_vec3		a;
	t_vec3		b;
	t_vec3		c;
}				t_mat3;

/*
**	ft_vec3.c
*/

t_vec3			ft_cross_vec3(t_vec3 a, t_vec3 b);
float			ft_dot_vec3(t_vec3 a, t_vec3 b);
t_vec3			ft_sub_vec3(t_vec3 a, t_vec3 b);
t_vec3			ft_add_vec3(t_vec3 a, t_vec3 b);
t_vec3			ft_mul_vec3(t_vec3 a, float b);

/*
**	ft_vec4.c
*/

t_vec4			ft_cross_vec4(t_vec4 a, t_vec4 b);
float			ft_dot_vec4(t_vec4 a, t_vec4 b);
t_vec4			ft_sub_vec4(t_vec4 a, t_vec4 b);
t_vec4			ft_add_vec4(t_vec4 a, t_vec4 b);
t_vec4			ft_mul_vec4(t_vec4 a, float b);

#endif
