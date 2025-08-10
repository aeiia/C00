/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 22:58:04 by tiida             #+#    #+#             */
/*   Updated: 2025/08/10 09:51:47 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
//	letter++;
}
/*
void	ft_print_alphabet(void)
{
	int = letter;
	letter = a;
	while (a <= z)
	{
		write (1, &c, 1);
	}
}
*/
