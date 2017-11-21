/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:19:19 by lmeyre            #+#    #+#             */
/*   Updated: 2017/11/19 17:14:26 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*curr;
	t_list	*tmp2;

	del((*alst)->content, (*alst)->content_size);
	curr = (*alst)->next;
	while (curr != NULL)
	{
		del(curr->content, curr->content_size);
		tmp2 = curr->next;
		free(curr);
		curr = tmp2;
	}
	free(*alst);
	*alst = NULL;
}
