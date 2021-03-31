/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:51:02 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/24 13:34:18 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negatif;
	int	nb;

	i = 0;
	nb = 0;
	negatif = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		   i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		while (str[i] == '+')
			i++;
		while (str[i] == '-')
		{
			negatif = negatif * -1;
			i++;
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{			
		nb = (nb * 10) + str[i] - '0';
		i++;
	}
	return (nb * negatif);
}
