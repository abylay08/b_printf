/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:13:42 by akali             #+#    #+#             */
/*   Updated: 2018/09/15 19:09:14 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

size_t		p_cv(t_list *output, va_list arg)
{
	output = ft_list_push_back(output, '0');
	output = ft_list_push_back(output, 'x');
	output->next->next = ft_itoa_ll(va_arg(arg, unsigned long), \
		output->next->next, 16);
	ft_list_print(output);
	return (ft_list_size(output));
}

size_t		o_cv(t_list *output, va_list arg)
{
	output = ft_itoa_ll(va_arg(arg, unsigned int), output, 8);
	ft_list_print(output);
	return (ft_list_size(output));
}

size_t		u_cv(t_list *output, va_list arg)
{
	output = ft_itoa_ll(va_arg(arg, unsigned int), output, 10);
	ft_list_print(output);
	return (ft_list_size(output));
}
