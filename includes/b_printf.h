/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_printf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:19:08 by akali             #+#    #+#             */
/*   Updated: 2018/09/16 14:19:49 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_PRINTF_H
# define B_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

void				ft_putstr(char *str);
void				ft_putchar(char c);
int					conversion_handling(char cv, va_list arg);
size_t				s_cv(va_list arg);
size_t				c_cv(va_list arg);
size_t				d_cv(t_list *output, va_list arg);
size_t				x_cv(t_list *output, va_list arg);
size_t				p_cv(t_list *output, va_list arg);
size_t				o_cv(t_list *output, va_list arg);
size_t				u_cv(t_list *output, va_list arg);
t_list				*ft_itoa_ll(long long num, t_list *str, int base);
int					b_printf(char *str, ...);
size_t				ft_list_size(t_list *begin_list);
t_list				*ft_list_push_back(t_list *begin_list, char data);
t_list				*ft_create_elem(char data);
t_list				*ft_list_reverse(t_list *begin_list);
void				ft_list_print(t_list *output);
size_t				ft_strlen(const char *str);
void				ft_list_clear(t_list *begin_list);

#endif
