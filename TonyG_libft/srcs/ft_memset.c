/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:15 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:29:44 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Write len number of time of value c in the string b.
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
