/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:34:35 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:39:57 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Join s1 and s2 strings together. The value return is allocated
//	with the malloc fonction so don't forget to free.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*retour;
	int		count;
	int		count_retour;

	if (!s1 || !s2)
		return (NULL);
	retour = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (retour == NULL)
		return (NULL);
	count = -1;
	count_retour = 0;
	while (s1[++count])
		retour[count_retour++] = s1[count];
	count = 0;
	while (s2[count])
	{
		retour[count_retour] = s2[count];
		count++;
		count_retour++;
	}
	retour[count_retour] = '\0';
	return (retour);
}
