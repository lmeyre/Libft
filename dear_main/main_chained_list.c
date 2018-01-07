/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:11:50 by lmeyre            #+#    #+#             */
/*   Updated: 2017/11/22 23:53:11 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	 main(int argc, char **argv)
{
	char **tab = ft_create_chartab(3,15);
	ft_strcpy(tab[0],"bonjour");
	ft_strcpy(tab[1],"aurevoir");
	ft_strcpy(tab[2],"test");
	//ft_rchar_tab(tab);

	t_list	*start;
	start = ft_lst_new("bonjour",8);
	ft_putstr(start->content);
	ft_putchar('\n');
	ft_putnbr(ft_lst_size(start));
	ft_putchar('\n');
	ft_lst_add(&start,ft_lst_new("second",10));
	ft_putstr("ajout du deuxieme elem\n");
	ft_putnbr(ft_lst_size(start));
	ft_putchar('\n');
	ft_putstr(start->content);
	ft_putchar('\n');
	ft_lst_add_end(&start,ft_lst_new("tri",5));
	ft_putstr("ajout du 3\n");
	ft_putstr(start->content);
	ft_putchar('\n');
	ft_putnbr(ft_lst_size(start));
	ft_putchar('\n');
//	t_list	*tmp = ft_lstlast(start);
	ft_putstr((ft_lst_last(start))->content);
	t_list	*mem;
	if (!(mem = ft_lst_push_params(argc,argv)))
		return (0);

	ft_putchar('\n');
	ft_putnbr(ft_lst_size(mem));
	ft_putchar('\n');
	ft_putstr(mem->content);
	mem = mem->next;
	ft_putchar('\n');
	ft_putstr(mem->content);
	mem = mem->next;
	ft_putchar('\n');
	ft_putchar('\n');
	return (0);
}
