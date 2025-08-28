/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 02:16:36 by tiida             #+#    #+#             */
/*   Updated: 2025/08/28 10:33:12 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int n)
{
	char	tens;
	char	ones;

	tens = n / 10 + '0';
	ones = n % 10 + '0';
	write(1, &tens, 1);
	write(1, &ones, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_print_numbers(left);
			write(1, " ", 1);
			ft_print_numbers(right);
			if (!(left == 98 && right == 99))
				write(1, ", ", 2);
			right++;
		}
		left++;
	}
}
/*
void	ft_print_comb2(void)
{
	char	lefta;
	char	leftb;
	char	rightc;
	char	rightd;
	int		left;
	int		right;

	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			lefta = left / 10 + '0';
			leftb = left % 10 + '0';
			rightc = right / 10 + '0';
			rightd = right / 10 + '0';
			write(1, &lefta, 1);
			write(1, &leftb, 1);
			write(1, " ", 1);
			write(1, &rightc, 1);
			write(1, &rightd, 1);
			if (!(lefta == '9' && leftb == '8'
					&& rightc == '9' && rightd == '9'))
				write(1, ", ", 2);
			right++;
		}
		left++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = b + 1;
	while (a <= '9' && b <= '8')
	{
		while ()
		while (c <= '9')
		{
			while (d <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, " ", 1);
				write (1, &c, 1);
				write (1, &d, 1);
				if (!(a == '9' && b == '8' && c == '9' && d == '9'))
					write (1, ", ", 2);
				d++;
			}
			c++;
			d = '0';
			if (c == '9' && d == '9')
			{
				c = '0';
				d = d + 1;
			}
		}
}
*/
