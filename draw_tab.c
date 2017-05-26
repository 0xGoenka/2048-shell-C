/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 21:29:50 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/31 22:22:06 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		set(void)
{
	if (COLS / 2 > LINES)
		return (LINES * 0.9);
	else
		return (COLS / 2.1);
}

void	line(int origin, int len, int dir)
{
	int i;

	i = 0;
	if (dir == 0)
	{
		while (i < len)
		{
			mvaddch(i, origin, '#');
			i++;
		}
	}
	if (dir == 1)
	{
		while (i < len)
		{
			mvaddch(origin, i, '#');
			i++;
		}
	}
}

void	setnu(int i, int tab[i][i])
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < i)
	{
		while (y < i)
		{
			pr(x * set() / i + 1, y * set() * 2 / i + 1,
					tab[x][y]);
			y++;
		}
		y = 0;
		x++;
	}
	refresh();
}

void	msquare(int j, int i)
{
	int w;
	int p;

	w = j * 2;
	p = 1;
	curs_set(FALSE);
	line(0, j, 0);
	line(w, j, 0);
	line(0, w, 1);
	line(j - 1, w, 1);
	while (p < i)
	{
		line(set() * 2 * p / i, set(), 0);
		line(set() * p / i, w, 1);
		p++;
	}
	refresh();
}
