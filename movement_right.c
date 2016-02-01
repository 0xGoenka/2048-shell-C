/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_right.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 13:38:24 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 19:41:23 by ptao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	fusionright(int lenside, int t[lenside][lenside], int i, int j)
{
	if (t[i][j] == t[i][j - 1] && t[i][j] != 0)
	{
		t[i][j] = t[i][j] + t[i][j - 1];
		t[i][j - 1] = 0;
		return (1);
	}
	return (0);
}

static int	slideright(int lenside, int t[lenside][lenside], int i, int j)
{
	int j1;
	int j2;
	int cnt;

	j1 = j;
	cnt = 0;
	while (j1 > 0)
	{
		j2 = j1 - 1;
		while (j2 > -1 && t[i][j1] == 0)
		{
			if (t[i][j2] != 0)
			{
				t[i][j1] = t[i][j2];
				t[i][j2] = 0;
				cnt = 1;
			}
			j2--;
		}
		j1--;
	}
	return (cnt);
}

int			move_right(int lenside, int t[lenside][lenside])
{
	int i;
	int j;
	int cnt;

	i = 0;
	cnt = 0;
	while (i < lenside)
	{
		j = lenside - 1;
		while (j > 0)
		{
			cnt = cnt + slideright(lenside, t, i, j);
			cnt = cnt + fusionright(lenside, t, i, j);
			j--;
		}
		i++;
	}
	return (cnt);
}
