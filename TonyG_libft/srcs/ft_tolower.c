/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:39:46 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:36:58 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Put the letter entered in lowercase. If it's already
//	in lowercase or it isnt a letter, do nothing.
int	ft_tolower(int character)
{
	if (character == -1)
		return (-1);
	if (character > 64 && character < 91)
		character += 32;
	return (character);
}
