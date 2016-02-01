/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_down.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 13:35:11 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 19:55:33 by ptao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	fusiondown(int lenside, int t[lenside][lenside], int i, int j)
{
	if (t[i][j] == t[i - 1][j] && t[i][j] != 0)
	{
		t[i][j] = t[i][j] + t[i - 1][j];
		t[i - 1][j] = 0;
		return (1);
	}
	return (0);
}

static int	slidedown(int lenside, int t[lenside][lenside], int i, int j)
{
	int	i1;
	int	i2;
	int	cnt;

	i1 = i;
	cnt = 0;
	while (i1 > 0)
	{
		i2 = i1 - 1;
		while (i2 > -1 && t[i1][j] == 0)
		{
			if (t[i2][j] != 0)
			{
				t[i1][j] = t[i2][j];
				t[i2][j] = 0;
				cnt = 1;
			}
			i2--;
		}
		i1--;
	}
	return (cnt);
}

int			move_down(int lenside, int t[lenside][lenside])
{
	int	i;
	int	j;
	int	cnt;

	j = 0;
	cnt = 0;
	while (j < lenside)
	{
		i = lenside - 1;
		while (i > 0)
		{
			cnt = cnt + slidedown(lenside, t, i, j);
			cnt = cnt + fusiondown(lenside, t, i, j);
			i--;
		}
		j++;
	}
	return (cnt);
}
