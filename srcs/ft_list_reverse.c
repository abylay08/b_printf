/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:45:28 by akali             #+#    #+#             */
/*   Updated: 2018/08/08 19:46:08 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

t_list	*ft_list_reverse(t_list *begin_list)
{
	t_list *prev;
	t_list *current;
	t_list *next;

	prev = NULL;
	current = begin_list;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	begin_list = prev;
	return (begin_list);
}
