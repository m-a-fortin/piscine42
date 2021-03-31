/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:01:13 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/18 14:11:42 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	 in;

	in = 0;
	while (src[in])
	{
		dest[in] = src[in];
		in ++;
	}
	dest[in] = '\0';
	return (dest);
}	
