/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:08:17 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 15:39:52 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

void	selectt()
{
	int i;
	int j;

	i = 0;
	while (i < 21)
	{
		j = 0;
		while (j < maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ff0000);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = maxx / 4;
		while (j < 2 * maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x0000ff00);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = 2 * maxx / 4;
		while (j < 3 * maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x000000ff);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = 3 * maxx / 4;
		while (j < 4 * maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00000000);
			j++;
		}
		i++;
	}
	i = 20;
	while (i <= 25)
	{
		j = 0;
		while (j <= maxx)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ffffff);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = maxx / 4- 5;
		while (j < maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ffffff);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = 0;
		while (j < 5)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ffffff);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = 2 * maxx / 4 - 5;
		while (j < 2 * maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ffffff);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = 3 * maxx / 4 - 5;
		while (j < 3 * maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ffffff);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < 21)
	{
		j = 4 * maxx / 4 - 5;
		while (j < 4 * maxx / 4)
		{
			mlx_pixel_put(mlx, win, j, i, 0x00ffffff);
			j++;
		}
		i++;
	}
}	
