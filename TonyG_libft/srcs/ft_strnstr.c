/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:37:51 by aguay             #+#    #+#             */
/*   Updated: 2021/09/30 11:12:39 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	needle_present(char *str, char *need)
{
	while (*str && *need)
	{
		if (*str != *need)
			return (false);
		str++;
		need++;
	}
	return (true);
}

//	Look for needle str in haystack for len. If needle is there,
//	return a pointer to it else return NULL pointer.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*need;
	char	*retour;

	str = (char *)haystack;
	need = (char *)needle;
	if (ft_strlen(need) == 0)
		return ((char *)haystack);
	while (*str && len >= ft_strlen(needle))
	{
		if (*str == *need)
		{
			retour = str;
			if (needle_present(str, need))
				return (retour);
		}
		str++;
		len--;
	}
	return (NULL);
}
