/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:34:35 by aguay             #+#    #+#             */
/*   Updated: 2021/10/04 14:23:53 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	NE PAS OUBLIER FREE
//	Alloue avec malloc et retourne une nouvelle chaine, résultat
//	de la concaténation de s1 et s2.
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
