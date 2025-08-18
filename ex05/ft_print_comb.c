/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 23:06:57 by tiida             #+#    #+#             */
/*   Updated: 2025/08/19 02:15:20 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/* IMPROVEMENT 1:
void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = a + 1;
	c = b + 1;
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (!(a == '7' && b == '8' && c == '9'))
					write (1, ", ", 2);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
}


What’s missing:

Separators (", ") between numbers
The subject requires:
012, 013, 014, ..., 789
Right now your code prints:
012013014...789
all glued together.

#include <unistd.h>
void    ft_print_comb(void)
{
        char    a;
        char    b;
        char    c;

        a = '0';
        b = a + 1;
        c = b + 1;
        while (a <= '7')
        {
                b = a + 1;
                while (b <= '8')
                {
                        c = b + 1;
                        while (c <= '9')
                        {
                                write (1, &a, 1);
                                write (1, &b, 1);
                                write (1, &c, 1);
                                if (!(a == '7' && b == '8' && c == '9'))
                                        write (1, ", ", 2);
                                c++;
                        }
                        b++;
//                        c = b + 1;
                }
                a++;
//                b = a + 1;
        }
}No extra , at the very end
You must stop after 789 without printing a trailing comma and space.
if (!(a == '7' && b == '8' && c == '9'))
    write(1, ", ", 2);
*/

/* IMPROVEMENT 
void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while ((a < b) && (b < c))
	{
		while (b != c)
		{
			while (c != '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
}
1. b and c are uninitialized at first use

a = '0';
while ((a < b) && (b < c))

At this point:
b and c have garbage values because they were never assigned anything yet.
C does not default them to '1' or '2'.
Comparing a < b with an uninitialized variable is undefined behavior — the loop might never run.

2. Wrong outer loop condition

while ((a < b) && (b < c))

That’s not the right condition for this problem. For ft_print_comb:

a should go from '0' to '7'
(because after '7' there’s no space for 2 more distinct digits)

b from a + 1 to '8'

c from b + 1 to '9'

while (a <= '7')

3. Middle and inner loop conditions

while (b <= '8')
{
    while (c <= '9')

4. Resetting variables in the right place

b++;
c = b + 1;

inside the middle loop — that’s good for c, but you also need to reset b at the start of the middle loop after incrementing a in the outer loop.
*/

/* DRAFT
void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = a + '1';
	c = b + '1';
	while ((a > b) && (b > c))
	{
		while (b != c)
		{
			while (c != '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

The problem here is '1' is the character code for digit 1 (ASCII 49), not the number 1.
If a is '0' (ASCII 48), then:
b = 48 + 49 = 97 → 'a' in ASCII
That’s not what you want — you want the next digit character, which is simply:
b = a + 1;
c = b + 1;

Resetting variables
After finishing the innermost loop (over c), you must reset c based on the new value of b before the next iteration. Same forb when a changes.
Right now your code increments b and c but never resets them for the next cycle.
*/
