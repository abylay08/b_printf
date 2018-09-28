/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:13:42 by akali             #+#    #+#             */
/*   Updated: 2018/09/23 11:59:00 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

size_t		p_cv(t_list *output, va_list arg)
{
	int size;

	ft_putstr("0x");
	output = ft_itoa_ll(va_arg(arg, unsigned long), output, 16);
	ft_list_print(output);
	size = 2 + ft_list_size(output);
	ft_list_clear(output);
	return (size);
}

size_t		o_cv(t_list *output, va_list arg)
{
	int size;

	output = ft_itoa_ll(va_arg(arg, unsigned int), output, 8);
	ft_list_print(output);
	size = ft_list_size(output);
	ft_list_clear(output);
	return (size);
}

size_t		u_cv(t_list *output, va_list arg)
{
	int size;

	output = ft_itoa_ll(va_arg(arg, unsigned int), output, 10);
	ft_list_print(output);
	size = ft_list_size(output);
	ft_list_clear(output);
	return (size);
}
