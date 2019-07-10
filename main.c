/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:10 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/10 16:55:13 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "paint.h"

int		keypress(int keycode, void *param)
{
	printf("key = %d\n", keycode);
	if (keycode == 123 && ox >= 10)
	{
		square();
		printf("left\n");
	}
	if (keycode == 124 && ox <= maxx - 10)
	{
		right();
		printf("right\n");
	}
	if (keycode == 125 && oy >= 10)
	{
		down();
		printf("down\n");
	}
	if (keycode == 126 && oy <= maxy - 10)
	{
		up();
		printf("up\n");
	}
	return (0);
}
int		my_mouse_funct(int button, int x, int y, void *param)
{
	int x_d;
	int y_d;
	x_d = x / pix;
	y_d = y / pix;
	ox = (round(x_d) * pix);
	oy = (round(y_d) * pix);
	place();
	return (0);
}
int		main(int ac, char **av)
{
	maxy = atoi(av[1]);
	maxx = atoi(av[2]);
	pix = atoi(av[3]);
	ox = 100;
	oy = 100;
	mlx = mlx_init();
	win = mlx_new_window(mlx, maxx, maxy, "Paint 42");
	if (ac == 4)
	{
		grid(maxx, maxy, pix);
	}
	else
		printf("Please run the function with valid inputs\neg: ./snek height width\n./snek 500 500");
	mlx_key_hook(win, keypress, 0);
	mlx_mouse_hook(win, my_mouse_funct, 0);
	mlx_loop(mlx);
}
