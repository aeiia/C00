/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 10:36:15 by tiida             #+#    #+#             */
/*   Updated: 2025/08/13 10:38:50 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}

/*
void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, 'P', 1);
	else
		write(1, 'N', 1);
}

The write() problem
-> The second argument to write() must be a pointer to memory 
— specifically the address of the character you want to print.
'P' is just a character literal, not its address.
CORRECT WAY
write(1, "P", 1);
or
char c = 'P';
write(1, &c, 1);
*/
