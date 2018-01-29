/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 15:24:30 by rpinoit           #+#    #+#             */
/*   Updated: 2018/01/29 18:48:07 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pixel.h"
#include "rtv1.h"
#include "math.h"
#include "types.h"

void		get_final_color(t_color *c)
{
	c->r = fmax(c->r, 0.0);
	c->g = fmax(c->g, 0.0);
	c->b = fmax(c->b, 0.0);
	c->r = fmin(c->r, 1.0) * 255.0;
	c->g = fmin(c->g, 1.0) * 255.0;
	c->b = fmin(c->b, 1.0) * 255.0;
}
