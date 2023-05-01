/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbhatta <sbhatta@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 19:44:26 by sbhatta           #+#    #+#             */
/*   Updated: 2023/04/11 13:47:14 by sbhatta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelem;
	t_list	*newlist;

	newlist = NULL;
	del = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst->next)
	{
		newelem = ft_lstnew(f(lst->content));
		ft_lstadd_back(&newlist, newelem);
		lst = lst->next;
	}
	newelem = ft_lstnew(f(lst->content));
	ft_lstadd_back(&newlist, newelem);
	return (newlist);
}
