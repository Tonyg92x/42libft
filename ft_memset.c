/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:15 by aguay             #+#    #+#             */
/*   Updated: 2021/09/28 14:03:51 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	write len bytes of value c in the string b.
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;
	char	*d;

	d = b;
	count = 0;
	while (count < len)
	{
		d[count] = (char) c;
		count++;
	}
	return (b);
}
