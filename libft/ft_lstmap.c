/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:29:37 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/28 07:29:38 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*ele;

	if (!lst || !f)
		return (0);
	ele = ft_lstnew(f(lst->content));
	if (!ele)
		return (0);
	new = ele;
	lst = lst->next;
	while (lst)
	{
		ele = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new, del);
			break ;
		}
		ft_lstadd_back(&new, ele);
		lst = lst->next;
	}
	return (new);
}
