/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 11:58:39 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 22:27:41 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int	inplay(int lenside, int tab[lenside][lenside])
{
	int key;
	int ret;

	generate_random(lenside, tab);
	if (chck_emptycase(lenside, tab) != 1 && chck_nofusion(lenside, tab) != 1)
		return (0);
	clear();
	setnu(lenside, tab);
	msquare(set(), lenside);
	ret = 0;
	while (ret < 1)
	{
		key = getch();
		while (key != KEY_UP && key != KEY_DOWN && key != KEY_LEFT &&
				key != KEY_RIGHT && key != 27)
			key = getch();
		if (key == 27)
			return (-1);
		ret = key_action(key, lenside, tab);
	}
	return (1);
}

static int	play_more(void)
{
	int more;
	int continu;

	clear();
	printw("You win! Continue to play? (y or n)\n");
	more = getch();
	while (more != 110 && more != 121)
	{
		printw("Please press a valid key.\n");
		more = getchar();
	}
	if (more == 121)
		continu = 1;
	else
		continu = 0;
	return (continu);
}

static int	play(int lenside, int *score)
{
	int continu;
	int first;
	int	tab[lenside][lenside];

	first = 1;
	continu = 1;
	*score = 0;
	init_grid(lenside, tab);
	while (continu)
	{
		if ((continu = inplay(lenside, tab)) == -1)
			return (-1);
		clear();
		if (first && continu)
		{
			continu = chck_not2048(lenside, tab);
			if (continu == 0)
			{
				first = 0;
				continu = play_more();
			}
		}
	}
	*score = max_score(lenside, tab);
	return (0);
}

int			main(void)
{
	int	lenside;
	int	score;
	int new_game;

	if (chck_pow2(WIN_VALUE) == 0)
	{
		ft_putstr("WIN_VALUE is not valid value.");
		return (0);
	}
	new_game = 1;
	lenside = main_option();
	while (new_game)
	{
		new_game = play(lenside, &score);
		if (new_game == -1)
		{
			endwin();
			return (0);
		}
		clear();
		new_game = end_game(score);
	}
	endwin();
	return (0);
}
