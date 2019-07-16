/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:28:10 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/07/16 16:03:02 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "paint.h"
/*
void	delay(double t)
{
	double	current, end;
	clock_t start;

	start = clock();
	current = (double)start / CLOCKS_PER_SEC;
	end = current + t;
	while (current < end)
	{
		start = clock();
		current = (double)start / CLOCKS_PER_SEC;
	
	}
	 int milli_seconds = 1000 * t;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}*/

int		keypress(int keycode, void *param)
{
	printf("key = %d\n", keycode);
	if (keycode == 123 && ox >= pix && oy >= 25)
	{
		square();
		printf("left\n");
	}
	if (keycode == 124 && ox <= maxx - pix - pix && oy >= 25)
	{
		right();
		printf("right\n");
	}
	if (keycode == 125 && oy <= maxy - pix - pix && oy >= 25)
	{
		down();
		printf("down\n");
	}
	if (keycode == 126 && oy >= pix + 25)
	{
		up();
		printf("up\n");
	}
	return (0);
}

int		my_mouse_funct(int button, int x, int y, void *param)
{
	if (button == 1 && y > 30)
	{
		int x_d;
		int y_d;
		x_d = x / pix;
		y_d = y / pix;
		ox = (round(x_d) * pix);
		oy = (round(y_d) * pix);
		place();
	}
	if (button == 1 && y < 20)
	{
		if (x < maxx / 4)
			colour = 0x00ff0000;
		if (x < 2 * maxx / 4 && x > maxx / 4)
			colour = 0x0000ff00;
		if (x < 3 * maxx / 4 && x > 2 * maxx / 4)
			colour = 0x000000ff;
		if (x < maxx && x > 3 * maxx / 4)
			colour = 0x00000000;
	}
	return (0);
}

int		main(int ac, char **av)
{
	colour = 0x00000000;
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
		selectt();
	}
	else
		printf("Please run the function with valid inputs\neg: ./snek height width\n./snek 500 500");
	mlx_key_hook(win, keypress, 0);
	mlx_mouse_hook(win, my_mouse_funct, 0);
	mlx_loop(mlx);
}
