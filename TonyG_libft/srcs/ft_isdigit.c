/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:36:39 by aguay             #+#    #+#             */
/*   Updated: 2022/03/21 08:56:58 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Return 1 (true) if the character entered
//	is a number. Return 0 (false) otherwise.
int	ft_isdigit(int character)
{
	if (character > 47 && character < 58)
		return (1);
	return (0);
}
