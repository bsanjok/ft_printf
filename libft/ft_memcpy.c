/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:51:31 by sbhatta           #+#    #+#             */
/*   Updated: 2023/04/08 13:27:01 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*ptrd;
	char	*ptrs;

	i = 0;
	ptrd = (char *)dst;
	ptrs = (char *)src;
	if (ptrd == NULL && ptrs == NULL)
		return (NULL);
	while (n--)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	return (dst);
}
