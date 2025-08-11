/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:08:22 by tiida             #+#    #+#             */
/*   Updated: 2025/08/11 10:30:38 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	num;

	num = '1';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

/*
void	ft_print_numbers(void)
{
	int	num;

	num = '1';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}

Should I put numbers inside of ' ' or not?
-> By writing '0', you’re not saying “the number zero” — you’re saying:

“The character whose ASCII code is for the digit 0”

…and that’s the number 48 internally. That’s why it prints as you expect.
 Takeaway:
When you want to print digits (or letters) using write() or printf("%c", ...), 
you must use the character form ('0', 'A', 'z'…), not the numeric form.

<Why I used char instead of int:>
Since you’re storing ASCII characters, char is enough.

int works too, but char is more descriptive here.
*/
