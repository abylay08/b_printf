/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 19:00:49 by akali             #+#    #+#             */
/*   Updated: 2018/08/08 19:00:59 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

void		ft_list_clear(t_list *begin_list)
{
	t_list *current;
	t_list *next;

	current = begin_list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	begin_list = NULL;
}
