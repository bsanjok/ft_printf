/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:52:35 by sbhatta           #+#    #+#             */
/*   Updated: 2023/04/22 13:02:08 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hex(unsigned long n, char ch, int *i)
{
	if (ch == 'u')
	{
		ft_putnbr_long(n, 1);
		*i += ft_printf_count(n);
	}
	else if ((n >= 0 && n <= 15) && ch == 'x')
	{
		write(1, &("0123456789abcdef"[n]), 1);
		(*i)++;
	}
	else if ((n >= 0 && n <= 15) && ch == 'X')
	{
		write(1, &("0123456789ABCDEF"[n]), 1);
		(*i)++;
	}
	else
	{
		ft_print_hex(n / 16, ch, i);
		ft_print_hex(n % 16, ch, i);
	}
}
