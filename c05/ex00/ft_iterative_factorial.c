/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:33:18 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/24 15:03:48 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb > 0)
	{
		while (nb > 1)
		{
			a = a * (nb - 1);
			--nb;
		}
		return (a);
	}
	if (nb == 0)
		return (1);
	else
		return (0);
}
