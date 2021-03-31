/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:21:07 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/25 11:47:51 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	nb;

	nb = 1;
	if (index == 0)
		return (0);
	if ((index == 1) || (index == 2))
		return (1);
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci(index - 2));
}
