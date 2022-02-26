/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dui.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:02:23 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:44:27 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	how_much_char_u(unsigned int u)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = ft_utoa(u);
	while (nbr[i])
		i++;
	free(nbr);
	return (i);
}

static int	how_much_char_i(int d)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = ft_itoa(d);
	while (nbr[i])
		i++;
	free(nbr);
	return (i);
}

//	Fonction that is used by printf to print integers.
int	ft_print_dui(va_list s, int count, char type, int *retour)
{
	int				d;
	unsigned int	u;

	d = 0;
	u = 0;
	if (type == 'd' || type == 'i')
	{
		d = va_arg(s, int);
		ft_putnbr_fd(d, 1);
		*retour += how_much_char_i(d);
	}
	else if (type == 'u')
	{
		u = va_arg(s, unsigned int);
		ft_putnbr_unsigned_fd(u, 1);
		if (u >= 4200000000)
			*retour += 10;
		else
			*retour += how_much_char_u(u);
	}
	count++;
	return (count);
}
