/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:16:50 by akali             #+#    #+#             */
/*   Updated: 2018/08/08 16:57:37 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

t_list	*ft_create_elem(char data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->data = data;
	node->next = 0;
	return (node);
}
