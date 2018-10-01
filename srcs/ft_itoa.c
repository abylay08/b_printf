/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:06:04 by akali             #+#    #+#             */
/*   Updated: 2018/09/15 19:09:23 by akali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/b_printf.h"

t_list		*ft_itoa_ll(long long num, t_list *str, int base)
{
	int is_negative;
	int rem;

	is_negative = 0;
	if (num == 0)
	{
		str = ft_list_push_back(str, '0');
		return (str);
	}
	if (num < 0 && base == 10)
	{
		is_negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		str = ft_list_push_back(str, (rem > 9) ? (rem - 10) + 'a' : rem + '0');
		num = num / base;
	}
	if (is_negative)
		str = ft_list_push_back(str, '-');
	return (ft_list_reverse(str));
}
