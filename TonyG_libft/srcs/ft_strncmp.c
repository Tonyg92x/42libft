/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:45 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:38:56 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Compare s1 with s2 for n character. Return 0 if it's the
//	same, if not return the s1 - s2 value of the dif.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	size_t	len;

	len = (size_t)ft_strlen(s1);
	if ((size_t)ft_strlen(s2) > len)
		len = (size_t)ft_strlen(s2);
	count = 0;
	while (count < n && count < len)
	{
		if (s1[count] != s2[count])
			return ((unsigned char)s1[count] - s2[count]);
		count++;
	}
	return (0);
}
