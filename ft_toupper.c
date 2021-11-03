/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:44:31 by aguay             #+#    #+#             */
/*   Updated: 2021/09/21 15:32:17 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	If character is an lowercase, uppercase it else return char.
//	If char is -1 return -1.
int	ft_toupper(int character)
{
	if (character == -1)
		return (-1);
	if (character > 96 && character < 123)
	{
		character -= 32;
	}
	return (character);
}
