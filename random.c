/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 23:57:21 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 19:57:49 by ptao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static int		generate_random_pos(int low, int high)
{
	srand(time(NULL));
	return ((rand() % (high - low + 1)) + low);
}

static int		generate_random_val(void)
{
	srand(time(NULL));
	return (2 * ((rand() % 2) + 1));
}

void			generate_random(int len, int tab[len][len])
{
	int	gen;
	int	i;
	int	j;
	int	pos;

	gen = 1;
	while (gen)
	{
		pos = generate_random_pos(0, len * len - 1);
		i = pos / len;
		j = pos % len;
		if (tab[i][j] == 0)
		{
			tab[i][j] = generate_random_val();
			gen = 0;
		}
	}
}
