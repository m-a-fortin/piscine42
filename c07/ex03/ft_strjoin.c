/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:52:35 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/30 14:40:11 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_strlentotal(char **strs, int size, char *sep)
{
	int	i;
	int	x;
	int	seplen;

	seplen = ft_strlen(sep) * (size - 1);
	x = 0;
	i = 0;
	while (x <= size)
	{
		i = i + ft_strlen(strs[x]);
		x++;
	}
	return (x + seplen);
}

char	*ft_strcat(char *str, char *dest)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (*str)
	{
		dest[i] = str[y];
		str++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		x;

	x = 0;
	if (size == 0)
	{
		str = malloc(sizeof(*str));
		str[0] = '\0';
		return (str);
	}
	else
		str = malloc(sizeof(*str) * ft_strlentotal(strs, size, sep));
	while (x != size)
	{
		str = ft_strcat(strs[x], str);
		if (x < (size - 1))
			str = ft_strcat(sep, str);
		x++;
	}
	return (str);
}
