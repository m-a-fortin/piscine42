/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:29:47 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/24 15:17:41 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		i2 = 0;
		while (str[i + i2] == to_find[i2])
		{
			if (to_find[i2 + 1] == '\0')
			{
				return (str + i);
			}
			i2++;
		}
		i++;
	}
	return (0);
}
