/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 10:37:14 by tiida             #+#    #+#             */
/*   Updated: 2025/09/03 00:59:25 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		digit = nb % 10 + '0';
	}
	digit = nb % 10 + '0';
	write(1, &digit, 1);
}

/*
void	ft_putnbr(int nb)
{
	char	digit;

	if (nb <= 9)
	{
		digit = nb % 10 + '0';
		write(1, &digit, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		digit = nb % 10 + '0';
		write(1, &digit, 1);
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putnbr(nb);
		write(1, "-", 1);
	}
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
}

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		write(1, &nb, 11);
	}
}

int	main(void)
{
	ft_putnbr(758927);
	return (0);
}

void	ft_putnbr(int nb)
{
	char	tens;
	char	ones;

	tens = nb / 10 + '0';
	ones = nb % 10 + '0';
	write(1, &tens, 1);
	write(1, &ones, 1);
}
*/
