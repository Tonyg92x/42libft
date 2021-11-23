/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 08:48:04 by aguay             #+#    #+#             */
/*   Updated: 2021/09/29 11:14:54 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	NE PAS OUBLIER DE MALLOC
//	Applique la fonction f a chaque caractère de la string s
//	et retourne une copie de la string s avec chaque caractere
//	passer dans la fonction f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*retour;

	i = 0;
	if (!s || !f)
		return (NULL);
	retour = malloc(ft_strlen(s) + 1 * sizeof(char));
	if (retour == NULL)
		return (NULL);
	while (s[i])
	{
		retour[i] = f(i, s[i]);
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
