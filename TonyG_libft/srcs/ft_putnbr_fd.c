/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:10:15 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:43:17 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static bool	ft_limit_test(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (true);
	}
	if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return (true);
	}
	return (false);
}

//	Fonction that write the integer entered in the fd entered.
void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		i;
	int		neg;

	neg = (n < 0);
	i = 0;
	if (n == 0)
		str[0] = '0';
	if (ft_limit_test(n, fd))
		return ;
	while (n != 0)
	{
		str[i++] = '0' + ft_abs(n % 10);
		n = n / 10;
	}
	if (neg)
		str[i] = '-';
	else if (i > 0)
		i--;
	while (i > -1)
	{
		write(fd, &str[i], 1);
		i--;
	}
}
