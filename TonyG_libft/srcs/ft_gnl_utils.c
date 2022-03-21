/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:57 by aguay             #+#    #+#             */
/*   Updated: 2022/03/21 08:49:03 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_decalage(char *buffer)
{
	int	count;

	count = 0;
	while (buffer[count] != '\0')
	{
		buffer[count] = buffer[count + 1];
		count++;
	}
	return (buffer);
}

bool	ft_protection(char **buffer, char **retour, int *count_ret)
{
	if ((*buffer)[0] == '\n')
	{
		(*retour)[(*count_ret)] = '\n';
		(*retour)[(*count_ret) + 1] = '\0';
		(*buffer) = ft_decalage((*buffer));
		return (true);
	}
	return (false);
}

char	*ft_get(char	*buffer, int *len, int fd, char *retour)
{
	int	count_ret;

	count_ret = 0;
	if (ft_protection(&buffer, &retour, &count_ret))
		return (retour);
	while (buffer[0] != '\n' && *len > 0)
	{
		if (buffer[0] == '\0')
				(*len) = read(fd, buffer, BUFFER_SIZE);
		while (buffer[0] != '\n' && buffer[0] != '\0')
		{
			retour[count_ret++] = buffer[0];
			buffer = ft_decalage(buffer);
		}
	}
	if (ft_protection(&buffer, &retour, &count_ret))
		return (retour);
	retour[count_ret] = '\0';
	return (false);
}
