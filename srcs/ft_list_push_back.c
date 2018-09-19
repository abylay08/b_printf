/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:50:49 by akali             #+#    #+#             */
/*   Updated: 2018/08/08 16:32:02 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

t_list	*ft_list_push_back(t_list *begin_list, char data)
{
	t_list *current;

	if (!begin_list)
	{
		begin_list = ft_create_elem(data);
		return (begin_list);
	}
	current = begin_list;
	while (current->next)
		current = current->next;
	current->next = ft_create_elem(data);
	return (begin_list);
}
