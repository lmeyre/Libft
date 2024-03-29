/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeyre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:28:36 by lmeyre            #+#    #+#             */
/*   Updated: 2018/07/05 21:19:36 by lmeyre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "limits.h"
# include "./get_next_line.h"
# include "../ft_printf/includes/ft_printf.h"

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

char				*ft_base_conv(char *str, int base_src, int base_dest);
char				*ft_itoa(int n);
char				*ft_itoa_base(long long n, int base);
char				*ft_itoa_base_unsigned(unsigned long long n, int base);

t_list				*ft_create_lst(int size, int content_size);
int					ft_lst_add(t_list **alst, t_list *mew);
int					ft_lst_add_end(t_list **lst, t_list *mew);
int					ft_lst_advance(t_list **head, int advance);
void				ft_lst_cnttdel(void **content);
void				ft_lst_del_all(t_list **lst);
void				ft_lst_del_last(t_list **lst);
void				ft_lst_del_one(t_list **lst, int position);
t_list				*ft_lst_getend(t_list *lst);
t_list				*ft_lst_int_copy(t_list *lst);
t_list				*ft_lsti_map(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lst_last(t_list *lst);
t_list				*ft_lst_new(size_t content_size);
t_list				*ft_lst_push_params(int argc, char **argv);
void				ft_lst_reset(t_list **head);
t_list				*ft_lst_reverse(t_list *lst);
int					ft_lst_size(t_list *lst);
int					ft_lst_stepback(t_list **head, int stepback);

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putlong_unsigned(unsigned long long n);
void				ft_putlong(long long n);
void				ft_putnbr(int n);
void				ft_putnbrn(int n);
void				ft_putnbr_abs(long long int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(const char *s);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putwchar(wchar_t wchar);
void				ft_putwstr(wchar_t *wstr);

void				ft_fill_str_c(char *str, char c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strcmp_c(const char *s1, const char *s2, char c);
int					ft_strcmp_n(const char *s1, const char *s2, int size);
char				*ft_strcpy(char *dest, const char *src);
int					ft_strequ(const char *s1, const char *s2);
void				ft_strdel(char **as);
void				ft_strdel_two(char **as, char **asbis);
char				*ft_strdup(const char *s1);
char				*ft_strdup_free(const char *s1, char **out);
int					ft_strhexa_int(char *str);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strjoin_free(char *s1, char *s2, char **out);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
int					ft_strlen(const char *s);
int					ft_strlen_c(char *str, char c);
int					ft_strlen_to(const char *s, char c);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dest, const char *src, size_t len);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(char *haystack,
					const char*needle, size_t len);
char				*ft_strrchr(char *s, int c);
char				*ft_str_replace(char *str, char old, char mew);
int					ft_strsearch(char *str, char c);
char				**ft_strsplit(const char *s, char c);
char				*ft_strstr(char *haystack, const char *needle);
int					ft_strstr_int(const char *haystack, const char *needle);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strsub_free(const char *s, unsigned int start,
					size_t len, char **out);
char				*ft_strtrim_c(char const *s, char c);
void				ft_swap_str(char *a, char *b);
char				*ft_toupper_str(char *str);
char				*ft_strtrim(char const *s);
unsigned char		*ft_unsigned_strdup(char *s1);

int					ft_abs(int i);
int					ft_atoi(const char *str);
unsigned long long	ft_atoi_unsignedlong(const char *str);
int					ft_int_length(long long int i);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_is_integer(char *str);
int					ft_is_negative(int n);
int					ft_is_number(char *str);
int					ft_isprint(int c);
int					ft_is_whitespace(char x);
void				ft_print_params(int argc, char **argv);
long long			ft_power(long long n, int power);
int					ft_nbr_of_words(const char *s, char c);
int					*ft_range(int min, int max);
int					ft_recursive_factorial(int nb);
void				ft_sort_params(int argc, char **argv);
int					ft_sqrt(int nb);
void				ft_swap(int *a, int *b);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_word_nbr(const char *s, char c);

void				**ft_2d_array(int width, int lenght, int size_type);
void				ft_bzero(void *s, size_t n);
char				**ft_create_chartab(int size, int sizelittle);
void				ft_free_strtab(char ***tab);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_rchar_tab(char **tab);
void				ft_rint_tab(int **tab, int nbr_of_tab, int lenght);
char				*ft_strnew(size_t size);
char				*ft_strnew_free(size_t size, char **str);

t_list				*ft_old_lstnew(void const *content, size_t content_size);

#endif
