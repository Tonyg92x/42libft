/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguay <aguay@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:36:28 by aguay             #+#    #+#             */
/*   Updated: 2022/03/21 08:56:42 by aguay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	Return 1 (true) if the character entered
//	is a letter. Return 0 (false) otherwise.
int	ft_isalpha(int c)
{
	if (c < 65 || (c < 97 && c > 90) || c > 122)
		return (0);
	return (1);
}
