/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:57:45 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/29 14:44:04 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb < 0)
		return (0);
	else
		return (1);
}
