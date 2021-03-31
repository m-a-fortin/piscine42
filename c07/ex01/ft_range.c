/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 13:07:17 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/30 10:50:53 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	i = 0;
	len = (max - min);
	tab = malloc(sizeof(*tab) * len);
	if (min >= max)
		return (0);
	while (i <= len)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
