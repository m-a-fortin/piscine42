/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:14:24 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/22 20:26:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	dest[i + i2] = '\0';
	return (dest);
}
