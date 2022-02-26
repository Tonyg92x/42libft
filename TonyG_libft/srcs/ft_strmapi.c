/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 08:48:04 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:41:22 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Pass every character of the string s in the f contion. Return
//	the result in a allocated string using malloc, so don't forget to free.
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
