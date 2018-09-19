/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:33:20 by akali             #+#    #+#             */
/*   Updated: 2018/08/08 17:42:22 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

size_t		ft_list_size(t_list *begin_list)
{
	size_t	size;
	t_list	*current;

	size = 0;
	current = begin_list;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}
