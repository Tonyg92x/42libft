/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:00 by aguay             #+#    #+#             */
/*   Updated: 2021/09/23 10:46:12 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Copy n byte of src into dst. Return is a pointer
//	to dst and use memmove if overlap.
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		nb;
	char		*dest;
	char		*retour;
	const char	*sourc;
	char		c;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = dst;
	retour = dest;
	sourc = src;
	nb = n;
	while (nb > 0)
	{
		c = *sourc;
		*dest = c;
		sourc++;
		dest++;
		nb--;
	}
	return (retour);
}
