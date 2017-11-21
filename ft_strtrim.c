/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:14:02 by lmeyre            #+#    #+#             */
/*   Updated: 2017/11/19 21:55:49 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		k;
	char	*ptr;

	if (!(s))
		return (NULL);
	start = 0;
	while (s[start] == '\t' || s[start] == '\n' || s[start] == ' ')
	{
		start++;
	}
	k = start;
	end = start;
	while (s[k])
	{
		if (s[k] != '\t' && s[k] != '\n' && s[k] != ' ' && s[k] != '\0')
			end = k;
		k++;
	}
	return (ptr = ft_strsub(s, start, end - start + 1));
}
