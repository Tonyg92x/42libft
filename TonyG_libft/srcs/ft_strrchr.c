/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:44:49 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:37:41 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Locate the last occurence of c in the string pointed
//	by s. The '\0' is considered a part of the string so
//	if c = '\0' the function locate the terminating '\0'.
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = (size_t)ft_strlen(s);
	if (c == '\0')
	{
		while (len > 0)
		{
			str++;
			len--;
		}
		return (str);
	}
	while (len > 0)
	{
		if ((char)str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	if ((char)s[0] == (char)c)
		return ((char *)s);
	return (NULL);
}
