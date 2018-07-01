/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 22:48:50 by lmeyre            #+#    #+#             */
/*   Updated: 2018/05/25 15:21:13 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putstr(char const *s)
{
	unsigned int i;

	i = 0;
	if (!(s))
		return ;
	while (s[i])
		++i;
	write(1, s, i);
}
