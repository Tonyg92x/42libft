/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 14:52:44 by aguay             #+#    #+#             */
/*   Updated: 2022/03/21 08:58:03 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Take the integer entered and convert it into a 
//	long variable (It's pretty usefull to test integer limits).
long int	ft_atol(char	*string)
{
	long int	retour;
	int			i;
	int			negative;

	negative = 1;
	i = 0;
	retour = 0;
	if (string[i] == '-')
	{
		negative = -1;
		i++;
	}
	while (string[i] != '\0')
		retour = retour * 10 + (string[i++] - 48);
	return (retour * negative);
}
