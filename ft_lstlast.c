/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:50:27 by aguay             #+#    #+#             */
/*   Updated: 2021/10/04 14:20:03 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Renvoie le dernier élément de la liste.
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*retour;

	if (!lst)
		return (NULL);
	retour = lst;
	while (retour->next != 0x0)
		retour = retour->next;
	return (retour);
}
