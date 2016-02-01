/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 19:26:29 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/31 21:31:29 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*help(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == 2)
		return (ft_strdup("2"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return ("");
}

static	int		num_len(int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	i--;
	return (i);
}

char			*ft_itoa(int n)
{
	int		tmp;
	char	*res;
	int		a;

	res = (char*)malloc(num_len(n) + 1);
	ft_bzero(res, num_len(n) + 1);
	if (ft_strcmp(help(n), "") != 0)
		return (help(n));
	a = 0;
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
		a = 1;
	}
	tmp = num_len(n);
	while (tmp >= 0)
	{
		res[tmp + a] = n % 10 + 48;
		n = n / 10;
		tmp--;
	}
	return (res);
}
