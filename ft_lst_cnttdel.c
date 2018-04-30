/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_cnttdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 10:23:59 by lmeyre            #+#    #+#             */
/*   Updated: 2018/04/30 10:27:29 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lst_cnttdel(void **content)
{
	if (content == NULL || !(*content))
		return ;
	free(*content);
	*content = NULL;
}
