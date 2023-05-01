/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:57:02 by sbhatta           #+#    #+#             */
/*   Updated: 2023/03/31 13:25:44 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*ptr;
	size_t	len;

	a = (char)c;
	ptr = NULL;
	len = ft_strlen((char *)s);
	if (a != '\0')
	{
		while (*s)
		{
			if (*s == a)
			{
				ptr = (char *)s;
				break ;
			}
			s++;
		}
	}
	else
		ptr = (char *)s + len;
	return (ptr);
}
