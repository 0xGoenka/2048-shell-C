/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:50:27 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/31 22:32:00 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s2;
	int		start;
	int		end;
	int		i;

	i = -1;
	start = 0;
	if (!s)
		return (0);
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (start == end)
		return ("");
	i = 0;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (!(s2 = (char *)malloc(sizeof(char) * (end + 10))))
		return (0);
	ft_bzero(s2, end + 10);
	while (start <= end)
		s2[i++] = s[start++ - 1];
	s2[i] = '\0';
	return (s2);
}
