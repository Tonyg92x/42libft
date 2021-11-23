/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:38:27 by aguay             #+#    #+#             */
/*   Updated: 2021/11/23 13:27:41 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Itère sur la liste lst et applique la fonction f au
//	contenu de chaque élément. Crée une nouvelle liste
//	résultant des applications successives de f. La
//	fonction del est la pour detruire le contenu d'un
//	élément si nécessaire.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*next_new_list;

	if (!f || !del)
		return (NULL);
	if (lst)
	{
		new_list = ft_lstnew((*f)(lst->content));
		if (lst->content == NULL)
			(*del)(new_list->content);
		lst = lst->next;
	}
	while (lst)
	{
		next_new_list = ft_lstnew ((*f)(lst->content));
		if (lst->content == NULL)
			ft_lstclear(&new_list, (*del));
		ft_lstadd_back(&new_list, next_new_list);
		lst = lst->next;
	}
	return (new_list);
}
