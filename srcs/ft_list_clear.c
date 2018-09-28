/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 11:37:16 by akali             #+#    #+#             */
/*   Updated: 2018/09/28 11:41:41 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

void	ft_list_clear(t_list *begin_list)
{
	t_list *next;
	t_list *current;

	current = begin_list;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	begin_list = NULL;
}
