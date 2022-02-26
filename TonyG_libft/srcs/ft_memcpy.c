/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:00 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:30:04 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Copy n bytes of src pointer into dst pointer. Return the pointer to the 
//	dst pointer. Protected from overlaping.
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
