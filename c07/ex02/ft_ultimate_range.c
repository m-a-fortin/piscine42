/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:13:06 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/30 11:50:05 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (-1);
	else
	{		
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
		return (i);
	}
}
