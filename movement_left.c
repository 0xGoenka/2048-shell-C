/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 13:36:59 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 19:54:12 by ptao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	fusionleft(int lenside, int t[lenside][lenside], int i, int j)
{
	if (t[i][j] == t[i][j + 1] && t[i][j] != 0)
	{
		t[i][j] = t[i][j] + t[i][j + 1];
		t[i][j + 1] = 0;
		return (1);
	}
	return (0);
}

static int	slideleft(int lenside, int t[lenside][lenside], int i, int j)
{
	int	j1;
	int j2;
	int cnt;

	j1 = j;
	cnt = 0;
	while (j1 < lenside - 1)
	{
		j2 = j1 + 1;
		while (j2 < lenside && t[i][j1] == 0)
		{
			if (t[i][j2] != 0)
			{
				t[i][j1] = t[i][j2];
				t[i][j2] = 0;
				cnt = 1;
			}
			j2++;
		}
		j1++;
	}
	return (cnt);
}

int			move_left(int lenside, int t[lenside][lenside])
{
	int i;
	int j;
	int cnt;

	i = 0;
	cnt = 0;
	while (i < lenside)
	{
		j = 0;
		while (j < lenside - 1)
		{
			cnt = cnt + slideleft(lenside, t, i, j);
			cnt = cnt + fusionleft(lenside, t, i, j);
			j++;
		}
		i++;
	}
	return (cnt);
}
