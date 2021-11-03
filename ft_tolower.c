/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:39:46 by aguay             #+#    #+#             */
/*   Updated: 2021/09/21 15:32:14 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	If character is an uppercase, lower it else return char.
//	If char is -1 return -1.
int	ft_tolower(int character)
{
	if (character == -1)
		return (-1);
	if (character > 64 && character < 91)
		character += 32;
	return (character);
}
