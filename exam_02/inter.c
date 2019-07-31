/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 23:15:58 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 14:10:44 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ver(char *str, char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			if (ver(av[1], av[1][i], i) == 1)
			{
				j = 0;
				while (av[2][j] != '\0')
				{
					if (av[2][j] == av[1][i])
					{
						write(1, &av[1][i], 1);
						break;
					}
				j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

