/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:20 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:37:23 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Return a pointer of the first occurence of c in s else return NULL.
char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (c == '\0')
	{
		while (len > 0)
		{
			s++;
			len--;
		}
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
