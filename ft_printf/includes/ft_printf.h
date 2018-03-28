/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 01:55:08 by lmeyre            #+#    #+#             */
/*   Updated: 2018/03/28 22:30:57 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../../includes/libft.h"
# define BUFF_SIZE 4096

typedef	struct		s_ptf
{
	char			buff[BUFF_SIZE];
	int				index;
	int				index_buff;
	int				size;
	char			*frmt;
	int				dieze;
	int				zero;
	int				neg;
	int				space;
	int				pos;
	int				width;
	int				precision;
	int				precision_on;
	int				hh_char;
	int				h_short;
	int				l_long;
	int				ll_longlong;
	int				j_intmax;
	int				z_size;
}					t_ptf;

int					ft_printf(const char *format, ...);
void				reset_buf(t_ptf *env);
void				ft_putchar_buff(t_ptf *env, char c);
void				ft_putstr_buff(t_ptf *env, char *str);
t_ptf				*initialize_env(void);
void				reset_value(t_ptf *env);
void				init_conv_tab(void (*trigger[])(t_ptf*, va_list*, int));
int					launch_scan(t_ptf *env, va_list *ap);
void				attrib_start(t_ptf *env);
void				field_width_start(t_ptf *env);
void				precision_start(t_ptf *env);
void				flag_start(t_ptf *env);
int					convertion_start(t_ptf *env, va_list *ap);
void				handle_space(int *count, int neg, t_ptf *env);
void				handle_pos(t_ptf *env, int number);
void				handle_precision_int(t_ptf *env, int size);
void				handle_precision_str(t_ptf *env, char *str);
void				handle_precision_wstr(t_ptf *env, wchar_t *wstr);
void				handle_width_other(t_ptf *env, int size);
void				handle_width_unicod(t_ptf *env, int size);
void				as_conv(t_ptf *env, va_list *ap, int bigger);
void				ac_conv(t_ptf *env, va_list *ap, int c);
void				percent_conv(t_ptf *env, va_list *ap, int usls);
void				s_conv(t_ptf *env, va_list *ap, int null);
void				d_conv(t_ptf *env, va_list *ap, int count);
void				b_conv(t_ptf *env, va_list *ap, int count);
void				c_conv(t_ptf *env, va_list *ap, int c);
void				base_conv(t_ptf *env, va_list *ap, int big);
void				p_conv(t_ptf *env, va_list *ap, int bigger);
void				check_color(t_ptf *env, const char *format);

#endif
