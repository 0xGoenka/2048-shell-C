/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:29:51 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/15 19:51:08 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *s;

	if ((s = malloc(sizeof(char) * size)))
	{
		ft_memset(s, 0, size);
		return (s);
	}
	else
		return (NULL);
}
