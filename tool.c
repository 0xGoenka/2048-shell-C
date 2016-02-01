/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 15:38:03 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 22:27:53 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	init_grid(int lenside, int tab[lenside][lenside])
{
	int		i;
	int		j;

	i = 0;
	while (i < lenside)
	{
		j = 0;
		while (j < lenside)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		move_dir(int lenside, int t[lenside][lenside], int dir)
{
	int		cnt;

	if (dir == 0)
		cnt = move_up(lenside, t);
	if (dir == 1)
		cnt = move_right(lenside, t);
	if (dir == 2)
		cnt = move_down(lenside, t);
	if (dir == 3)
		cnt = move_left(lenside, t);
	return (cnt);
}

int		main_option(void)
{
	int		lenside;

	initscr();
	clear();
	print_rules();
	lenside = define_lenside();
	print_command(13, lenside);
	clear();
	keypad(stdscr, TRUE);
	noecho();
	return (lenside);
}

int		key_action(int key, int lenside, int tab[lenside][lenside])
{
	if (key == 27)
		return (-1);
	if (key == KEY_UP)
		return (move_dir(lenside, tab, 0));
	if (key == KEY_RIGHT)
		return (move_dir(lenside, tab, 1));
	if (key == KEY_DOWN)
		return (move_dir(lenside, tab, 2));
	if (key == KEY_LEFT)
		return (move_dir(lenside, tab, 3));
	return (0);
}
