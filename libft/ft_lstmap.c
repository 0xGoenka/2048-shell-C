/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 11:05:45 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/12 15:01:03 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;

	if (lst)
		tmp = ft_lstnew(lst->content, lst->content_size);
	else
		tmp = NULL;
	if (tmp)
		tmp = f(tmp);
	if (tmp && lst->next)
		tmp->next = ft_lstmap(lst->next, f);
	return (tmp);
}
