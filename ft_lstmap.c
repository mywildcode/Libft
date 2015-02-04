/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ql-eilde <ql-eilde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/31 18:25:12 by ql-eilde          #+#    #+#             */
/*   Updated: 2015/01/31 19:33:08 by ql-eilde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*ptrnew;
	t_list	*list;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	ptrnew = ft_lstnew(new->content, new->content_size);
	list = ptrnew;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		list->next = ft_lstnew(new->content, new->content_size);
		lst = lst->next;
		list = list->next;
	}
	return (ptrnew);
}
