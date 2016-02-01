/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 12:09:26 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 19:58:30 by ptao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	print_rules(void)
{
	printw("************************************************\n");
	printw("********************        ********************\n");
	printw("********************  2048  ********************\n");
	printw("********************        ********************\n");
	printw("************************************************\n\n");
	printw("RULES :\n");
	printw("Move numbered tiles using the four arrow keys to\n");
	printw("obtain the parametized value.\n");
	printw("Tiles appear as far as possible in the chosen \n");
	printw("direction until they are stopped by either \n");
	printw("another tile or the edge of the grid.    \n\n");
}

void	print_command(int line, int lenside)
{
	mvprintw(line, 0, "You chose a %d-width grid.\n\n", lenside);
	printw("COMMAND :\n");
	printw("Up arrow key    : Slide tiles to the top.\n");
	printw("Down arrow key  : Slide tiles to the bottom.\n");
	printw("Left arrow key  : Slide tiles to the left.\n");
	printw("Right arrow key : Slide tiles to the right.\n");
	printw("Escape key      : To leave the game.\n");
	printw("\n");
	printw("Press any key to start the game.\n");
	getch();
}

int		end_game(int score)
{
	int more;
	int ret;

	ret = 0;
	mvprintw(0, 0, "Score %d - Play new game? (y or n)\n", score);
	more = getch();
	while (more != 110 && more != 121)
	{
		printw("Please press a valid key.\n");
		more = getch();
	}
	if (more == 121)
		ret = 1;
	return (ret);
}
