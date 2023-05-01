/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:28:36 by sbhatta           #+#    #+#             */
/*   Updated: 2023/04/21 15:45:40 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_printf_ptr(unsigned long p, int *i, char ch)
{
	if (ch == 'c')
	{
		ft_putchar_fd(p, 1);
		(*i)++;
	}
	else if (ch == 'i' || ch == 'd')
	{
		ft_putnbr_fd((int)p, 1);
		*i += ft_printf_count((int)p);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		ft_print_hex(p, 'x', i);
		*i += 2;
	}
}
