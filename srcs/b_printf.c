/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:21:57 by akali             #+#    #+#             */
/*   Updated: 2018/09/15 17:37:36 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

void	ft_list_print(t_list *output)
{
	t_list *current;

	current = output;
	while (current)
	{
		write(1, &(current->data), 1);
		current = current->next;
	}
}

int		b_printf(char *str, ...)
{
	va_list		arg;
	int			i;
	int			j;
	int			c;

	i = 0;
	j = 0;
	va_start(arg, str);
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			i++;
			c = conversion_handling(str[i++], arg);
			j += c;
		}
		else
		{
			write(1, &str[i++], 1);
			j++;
		}
	}
	va_end(arg);
	return (j);
}
