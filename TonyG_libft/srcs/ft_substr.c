/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:38:32 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:39:41 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*start_bigger(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

//	Return a new string, that has the content of s string, starting
//	at the start argument as index. The new string is allocated with
//	malloc so don't forget to free it.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	char			*str;

	if (!s)
		return (NULL);
	count = 0;
	if (start > ft_strlen(s))
		return (start_bigger());
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start + 1;
	while (count++ != start && *s)
		s++;
	str = malloc(len + 1);
	if (!str || !s)
		return (NULL);
	ft_memset(str, 'x', len);
	count = -1;
	while (str[++count] && len-- > 0)
		str[count] = s[count];
	str[count] = '\0';
	return (str);
}
