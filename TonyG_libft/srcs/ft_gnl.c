/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:25:02 by aguay             #+#    #+#             */
/*   Updated: 2022/03/21 08:49:08 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_clean(char *retour)
{
	free (retour);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char		buffer[OPEN_MAX][BUFFER_SIZE + 1];
	int				len;
	char			*ptr;
	char			*retour;

	if (fd < 0 || fd > OPEN_MAX)
		return (NULL);
	retour = malloc(16711568);
	ptr = buffer[fd];
	len = 1;
	if (buffer[fd][0] != '\0')
		ptr = ft_get(ptr, &len, fd, retour);
	else
	{
		len = read(fd, ptr, BUFFER_SIZE);
		if (len == -1 || len == 0)
			return (ft_clean(retour));
		ptr = ft_get(ptr, &len, fd, retour);
	}
	if (len == 0 && retour[0] == '\0')
		return (ft_clean(retour));
	return (retour);
}
