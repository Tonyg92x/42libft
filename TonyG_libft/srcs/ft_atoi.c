/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:35:40 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:33:45 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	how_much_digit(const char *str)
{
	int	i;
	int	retour;

	i = 0;
	retour = 0;
	while (str[i++])
	{
		if (ft_isdigit(str[i]))
			retour++;
	}
	return (retour);
}

static int	long_fix(const char *str)
{
	if (how_much_digit(str) > 11)
	{
		if (str[0] != '-')
			return (-1);
		return (0);
	}
	return (2);
}

//	Convert a string containing an integer number to an integer.
int	ft_atoi(const char *str)
{
	int	count;
	int	retour;
	int	negat;

	negat = 1;
	retour = 0;
	count = 0;
	if (long_fix(str) == 0 || long_fix(str) == -1)
		return (long_fix(str));
	while (str[count] == ' ' || str[count] == '\f' || str[count] == '\n'
		|| str[count] == '\r' || str[count] == '\t' || str[count] == '\v')
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			negat = -1;
		count++;
	}
	while (str[count] < 58 && str[count] > 47)
	{
		retour = retour * 10 + (str[count] - 48);
		count++;
	}
	return (retour * negat);
}
