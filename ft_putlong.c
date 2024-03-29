/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 23:56:25 by lmeyre            #+#    #+#             */
/*   Updated: 2018/05/25 15:21:10 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putlong(long long int n)
{
	unsigned long long nbr;

	nbr = 0;
	if (n == LONG_MIN)
	{
		ft_putstr("-9223372036854775808");
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		nbr = (unsigned long long)(n * -1);
	}
	else
		nbr = (unsigned long long)n;
	if (nbr > 9)
	{
		ft_putlong(nbr / 10);
		ft_putlong(nbr % 10);
	}
	else
		ft_putchar((char)nbr + '0');
}
