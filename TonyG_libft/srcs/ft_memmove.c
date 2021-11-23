/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:05 by aguay             #+#    #+#             */
/*   Updated: 2021/09/27 10:32:55 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Copies len bytes from sting src to dst. The two string may overlap.
void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char	*dst;
	char	*src;
	size_t	i;

	if (!destination && !source)
		return (NULL);
	i = 0;
	dst = (char *)destination;
	src = (char *)source;
	if (dst > src)
	{
		while (size-- > 0)
			dst[size] = src[size];
	}
	else
	{
		while (i < size)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
