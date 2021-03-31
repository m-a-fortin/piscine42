/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:42:45 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/25 17:56:19 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nbtemp;

	nbtemp = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nbtemp = nbtemp * nb;
		power--;
	}
	return (nbtemp);
}
