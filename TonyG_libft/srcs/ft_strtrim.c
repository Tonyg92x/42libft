/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 08:27:49 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:40:28 by tonyg            ###   ########.fr       */
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

//	Remove every character (that is in set) of the s1 string.
//	Return a new string with the result allocated with malloc,
//	so don't forget to free it.
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
