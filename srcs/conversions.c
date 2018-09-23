/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:28:04 by akali             #+#    #+#             */
/*   Updated: 2018/09/15 19:09:17 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

int			conversion_handling(char cv, va_list arg)
{
	t_list *output;

	output = NULL;
	if (cv == 's')
		return (s_cv(arg));
	else if (cv == 'c')
		return (c_cv(arg));
	else if (cv == 'd' || cv == 'i')
		return (d_cv(output, arg));
	else if (cv == 'p')
		return (p_cv(output, arg));
	else if (cv == 'o')
		return (o_cv(output, arg));
	else if (cv == 'u')
		return (u_cv(output, arg));
	else if (cv == 'x')
		return (x_cv(output, arg));
	ft_list_clear(output);
	return (0);
}

size_t		s_cv(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if(str == NULL)
	{
		ft_putstr("(null)");
		return (0);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

size_t		c_cv(va_list arg)
{
	char c;

	c = (char)va_arg(arg, int); 
	write(1, &c, 1);
	return (1);
}

size_t		d_cv(t_list *output, va_list arg)
{
	output = ft_itoa_ll(va_arg(arg, int), output, 10);
	ft_list_print(output);
	return (ft_list_size(output));
}

size_t		x_cv(t_list *output, va_list arg)
{
	output = ft_itoa_ll(va_arg(arg, unsigned int), output, 16);
	ft_list_print(output);
	return (ft_list_size(output));
}
