/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:02 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 08:29:59 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Shift down every element of the
// stack a. The last element become
// the first one.
void	rra(t_llists *l, bool rrr)
{
	t_llist	*l_temp;

	if (l->len_a < 2)
		return ;
	l_temp = l->start_a;
	while (l_temp->next != NULL)
		l_temp = l_temp->next;
	l->start_a->prev = l_temp;
	l_temp->prev->next = NULL;
	l_temp->next = l->start_a;
	l->start_a = l_temp;
	if (rrr == false)
		ft_printf("rra\n");
}

// Shift down every element of the
// stack b. The last element become
// the first one.
void	rrb(t_llists *l, bool rrr)
{
	t_llist	*l_temp;

	if (l->len_b < 2)
		return ;
	l_temp = l->start_b;
	while (l_temp->next != NULL)
		l_temp = l_temp->next;
	l->start_b->prev = l_temp;
	l_temp->prev = NULL;
	l_temp->next = l->start_b;
	l->start_b = l_temp;
	if (rrr == false)
		ft_printf("rra\n");
	if (rrr == false)
		ft_printf("rra\n");
}

// Shift down every element of the
// stack a and b. The last element 
// become the first one.
void	rrr(t_llists *l)
{
	rra(l, true);
	rrb(l, true);
	ft_printf("rrr\n");
}
