/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:13:05 by sbhatta           #+#    #+#             */
/*   Updated: 2023/04/08 18:24:47 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	long	i;
	int		index;

	i = (long)fd;
	index = 0;
	if (s && fd)
	{
		while (s[index])
		{
			ft_putchar_fd(s[index], i);
			index++;
		}
		ft_putchar_fd('\n', i);
	}
}
