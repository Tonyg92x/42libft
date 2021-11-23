/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:38:32 by aguay             #+#    #+#             */
/*   Updated: 2021/10/04 13:39:28 by aguay            ###   ########.fr       */
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

//	NE PAS OUBLIER DE FREE
//	Alloue avec malloc et retourne une chaine de caractères
//	issue de la chaine 's'. Le nouvel index commence à start.
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
