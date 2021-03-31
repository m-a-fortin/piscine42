/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:48:52 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/25 17:57:42 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	 int	a;

	a = 1;
	if (nb > 0)
	{	
		while (a < (nb / a))
			a++;
		if (a * a == nb)
			return (a);
	}
	return (0);
}