/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 21:39:27 by lmeyre            #+#    #+#             */
/*   Updated: 2017/11/22 23:15:13 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lst_size(t_list	*lst)
{
	int count;

	count = 0;
	if (!lst)
		return (count);
	while(lst)
	{
		++count;
		lst = lst->next;
	}
	return (count);
}
