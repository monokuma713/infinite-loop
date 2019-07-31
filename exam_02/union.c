/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:16:05 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 14:12:44 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		verif(char *str, char a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (str[i] == a)
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
			if (verif(av[1], av[1][i], i) == 1)
				ft_putchar(av[1][i]);
			i++;
		}
		j = 0;
		while (av[2][j] != '\0')
		{
			if (verif(av[1], av[2][j], i) && verif(av[2], av[2][j], j))
					ft_putchar(av[2][j]);
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}


