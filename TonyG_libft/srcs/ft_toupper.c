/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 10:44:31 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:36:35 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Put the letter entered in uppercase. If it's
//	already uppercase or it isnt a letter, do nothing.
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
