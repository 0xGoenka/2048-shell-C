/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 12:44:59 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 18:23:19 by ptao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	define_lenside(void)
{
	int		entry;
	int		lenside;

	printw("Enter the width of your grid (between 4 and 9) :\n");
	entry = getch();
	while (entry < 52 || entry > 57)
	{
		printw("\nIncorrect width, please re-enter the width :\n");
		entry = getch();
	}
	lenside = entry - 48;
	return (lenside);
}

int	max_score(int lenside, int tab[lenside][lenside])
{
	int i;
	int j;
	int max;

	i = 0;
	max = 0;
	while (i < lenside)
	{
		j = 0;
		while (j < lenside)
		{
			if (tab[i][j] > max)
				max = tab[i][j];
			j++;
		}
		i++;
	}
	return (max);
}
