/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 00:10:03 by lmeyre            #+#    #+#             */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lst_new(size_t content_size)
{
	t_list	*ptr;

	if (!(ptr = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content_size == 0)
		ptr->content = NULL;
	else if (!(ptr->content = ft_memalloc(content_size)))
		return (NULL);
	ptr->next = NULL;
	ptr->prev = NULL;
	return (ptr);
}
