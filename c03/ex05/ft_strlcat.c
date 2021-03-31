/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:21:42 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/23 14:06:14 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src unsigned int size)
{
	unsigned int i;
	unsigned int i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (i < n)
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	return (dest);
}
