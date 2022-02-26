/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:05 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:30:20 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Same as memcpy, but it is not protected from overlaping.
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
