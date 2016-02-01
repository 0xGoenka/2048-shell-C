/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:18:41 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/12 14:58:27 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupper(char *s)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		ret[i] = ft_toupper(s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
