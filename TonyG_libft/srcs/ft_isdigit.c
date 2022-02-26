/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:36:39 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:32:23 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Return 1 (true) if the character entered is a number. Return 0 (false) otherwise.
int	ft_isdigit(int character)
{
	if (character > 47 && character < 58)
		return (1);
	return (0);
}
