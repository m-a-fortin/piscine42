/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 17:12:58 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/25 19:15:30 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	while (i > 1)
	{
		i--;
		ft_putstr(argv[i]);
		write (1, "\n", 1);
	}
}
