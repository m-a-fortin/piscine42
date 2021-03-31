/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 19:00:56 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/15 09:44:47 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putcomb(int a1, int a2, int a3)
{
	ft_putchar(48 + a1);
	ft_putchar(48 + a2);
	ft_putchar(48 + a3);
	if (a1 < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	if (a1 == 7)
		write(1, "\n", 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{	
			c = b + 1;
			while (c <= 9)
			{
				ft_putcomb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
