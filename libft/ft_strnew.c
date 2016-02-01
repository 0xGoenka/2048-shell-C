/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:14:36 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/08 11:25:36 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;

	if ((s = (char *)malloc(sizeof(char) * (int)size + 1)))
	{
		ft_bzero(s, size + 1);
		return (s);
	}
	else
		return (NULL);
}
