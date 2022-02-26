/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:30:21 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:40:54 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	how_much_for_next(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

static int	how_much_str(const char *str, char c)
{
	int	i;
	int	nb_str;

	if (str == 0 || str[0] == '\0')
		return (0);
	i = 0;
	if (str[i] == c)
		nb_str = 0;
	else
		nb_str = 1;
	while (str[i] && (size_t)i <= ft_strlen(str))
	{
		if (str[i] == c)
		{
			nb_str++;
			while (str[i] == c)
				i++;
		}
		else
			i++;
	}
	if (str[i - 1] == c)
		nb_str--;
	return (nb_str);
}

static char	*str_set(char *str, char c)
{
	while (*str == c)
		str++;
	return (str);
}

static void	retour_fil(char **retour, const char *s, char c)
{
	int		nb_str;
	char	*str;
	char	*new_str;

	str = (char *)s;
	nb_str = -1;
	while (nb_str++ < (how_much_str(s, c) - 1))
	{
		str = str_set(str, c);
		if (str[0] == '\0')
			break ;
		new_str = ft_substr(str, 0, how_much_for_next(str, c));
		if (new_str[0] == '\0')
		{
			free(new_str);
			new_str = ft_substr(str, 0, ft_strlen(str));
		}
		if (*new_str)
			retour[nb_str] = ft_strdup(new_str);
		else
			retour[nb_str] = ft_strdup(str);
		free(new_str);
		str = ft_strchr(str, c);
	}
}

//	Split the string between c character in multiple strings.
//	The return is a pointer that has every pointer of every
//	string made. The memory is allocated by malloc, in 2D so
//	don't forget to ft_free2d.
char	**ft_split(char const *s, char c)
{
	char	**retour;

	retour = ft_calloc(how_much_str(s, c) + 1, sizeof(char *));
	if (s == 0)
	{
		*retour = malloc(sizeof(char));
		*retour = 0;
		return (retour);
	}
	if (!retour)
		return (NULL);
	retour_fil(retour, s, c);
	retour[how_much_str(s, c)] = NULL;
	return (retour);
}
