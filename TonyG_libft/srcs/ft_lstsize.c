/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 08:44:56 by aguay             #+#    #+#             */
/*   Updated: 2021/10/04 13:53:25 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Compte et revoi le nombre d'élément
//	de la list.
int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		retour;

	if (!lst)
		return (0);
	retour = 1;
	temp = lst;
	while (temp->next != NULL)
	{
		retour++;
		temp = temp->next;
	}
	return (retour);
}
