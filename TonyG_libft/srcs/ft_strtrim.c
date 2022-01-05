/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:27:49 by aguay             #+#    #+#             */
/*   Updated: 2021/10/05 08:56:39 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*clean_start(char *temp, char *c)
{
	size_t	i;
	size_t	y;
	size_t	z;

	i = 0;
	y = 0;
	while (c[i])
	{
		if (temp[y] == c[i])
		{
			z = y;
			while (temp[z + 1])
			{
				temp[z] = temp[z + 1];
				z++;
			}
			temp[z] = '\0';
			i = 0;
		}
		else
			i++;
	}
	return (temp);
}

static char	*clean_end(char *temp, char *c)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = ft_strlen(temp) - 1;
	while (c[i])
	{
		if (temp[y] == c[i])
		{
			temp[y] = '\0';
			y--;
			i = 0;
		}
		else
			i++;
	}
	return (temp);
}

static bool	chech_only_set(char const *temp, char const *set)
{
	int	i;
	int	y;

	i = 0;
	if (set[i] == '\0')
		return (false);
	while (set[i])
	{
		y = 0;
		while (temp[y])
		{
			if (temp[y] != set[i])
				return (false);
			y++;
		}
		i++;
	}
	return (true);
}

// NE PAS OUBLIER DE FREE
// Enlveve tous les charactères dans set de s1.
// Renvoie une nouvelle string avec la modification.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	temp[1000];
	char	*retour;

	if (!s1)
		return (NULL);
	ft_strlcpy(temp, s1, ft_strlen(s1) + 1);
	if (chech_only_set(s1, set))
	{
		retour = malloc(1);
		retour[0] = '\0';
		return (retour);
	}
	clean_start(temp, (char *) set);
	clean_end(temp, (char *) set);
	retour = ft_strdup(temp);
	return (retour);
}
