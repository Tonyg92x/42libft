/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:36:39 by aguay             #+#    #+#             */
/*   Updated: 2021/09/24 10:15:21 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Return 1 if char is a number, 0 if not.
int	ft_isdigit(int character)
{
	if (character > 47 && character < 58)
		return (1);
	return (0);
}
