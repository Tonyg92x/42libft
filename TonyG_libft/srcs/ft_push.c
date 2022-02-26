/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:02 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 08:29:34 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Push the first element of the stack b to the
// First element of the stack a.
void	pa(t_llists *l)
{
	t_llist	*temp_a;

	if (l->len_b < 1)
		return ;
	temp_a = l->start_b;
	if (l->len_b > 1)
	{
		l->start_b->next->prev = NULL;
		l->start_b = l->start_b->next;
	}
	if (l->len_a > 0)
	{
		temp_a->next = l->start_a;
		l->start_a->prev = temp_a;
	}
	else
		temp_a->next = NULL;
	l->start_a = temp_a;
	if (l->len_b == 1)
		l->start_b = NULL;
	ft_printf("pa\n");
	l->len_a++;
	l->len_b--;
}

// Push the first element of the stack a to the
// first element b.
void	pb(t_llists *l)
{
	t_llist	*temp_b;

	if (l->len_a < 1)
		return ;
	temp_b = l->start_a;
	if (l->len_a > 1)
	{
		l->start_a->next->prev = NULL;
		l->start_a = l->start_a->next;
	}
	if (l->len_b > 0)
	{
		temp_b->next = l->start_b;
		l->start_b->prev = temp_b;
	}
	else
		temp_b->next = NULL;
	if (l->len_a == 1)
		l->start_a = NULL;
	l->start_b = temp_b;
	ft_printf("pb\n");
	l->len_a--;
	l->len_b++;
}
