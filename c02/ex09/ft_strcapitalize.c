/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 18:29:10 by mafortin          #+#    #+#             */
/*   Updated: 2021/03/22 11:30:29 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_strcapitalize(char *str)
{
	char a;
	a = 0;

	while (*str)
	{
		if ((*str >= 0 && *str <= 47) || (*str >= 58 && *str <= 64 ))
		{
			write(1, str, 1);
			str++;
			if (*str >= 'a' && *str <= 'z')
			{
				str = str - 32;
				write(1, str, 1);
				str = str + 32;
			}
			continue;
		}
		else if ((*str >= 91 && *str <= 96) || (*str >= 123))
		{
			write(1,str, 1);
			str++;
			if (*str >= 'a' && *str <= 'z')
			{
				a = *str;
				a = a - 32;

				write(1, &a, 1);
			}
			continue;
		}
		else
		{
		write(1, str, 1);
		str ++;
		}
	}
}

int	main(void)
{
	ft_strcapitalize("Salut comment");
}
