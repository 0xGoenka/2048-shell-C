/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 14:19:17 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 22:30:36 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		chck_emptycase(int lenside, int tab[lenside][lenside])
{
	int i;
	int j;

	i = 0;
	while (i < lenside)
	{
		j = 0;
		while (j < lenside)
		{
			if (tab[i][j] == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		chck_nofusion(int lenside, int tab[lenside][lenside])
{
	int i;
	int j;

	i = 0;
	while (i < lenside - 1)
	{
		j = 0;
		while (j < lenside - 1)
		{
			if ((tab[i][j] == tab[i][j + 1]) || (tab[i][j] == tab[i + 1][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		chck_not2048(int lenside, int tab[lenside][lenside])
{
	int i;
	int j;

	i = 0;
	while (i < lenside)
	{
		j = 0;
		while (j < lenside)
		{
			if (tab[i][j] >= WIN_VALUE)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		chck_pow2(int n)
{
	int i;
	int ret;

	i = 1;
	ret = 0;
	while (i < n)
		i = 2 * i;
	if (i == n)
		ret = 1;
	return (ret);
}
