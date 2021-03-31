/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:19:36 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/28 15:52:55 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 0;
	if (argc <= 1)
		return (0);
	while (i != (argc - 1))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0 )
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i != argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
