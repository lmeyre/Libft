/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 20:13:19 by lmeyre            #+#    #+#             */
/*   Updated: 2017/11/19 21:57:55 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*prev;
	t_list	*curr;

	if (!(lst))
		return (NULL);
	start = f(ft_lstnew(lst->content, lst->content_size));
	prev = start;
	while (lst != NULL)
	{
		lst = lst->next;
		if (lst != NULL)
			curr = f(ft_lstnew(lst->content, lst->content_size));
		else
			curr = NULL;
		prev->next = curr;
		prev = curr;
	}
	return (start);
}
