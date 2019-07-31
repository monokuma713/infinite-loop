/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 22:23:22 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/25 22:29:39 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'm')
					|| (av[1][i] >= 'A' && av[1][i] <= 'M'))
				ft_putchar(av[1][i] + 13);
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z')
					|| (av[1][i] >= 'N' && av[1][i] <= 'Z'))
				ft_putchar(av[1][i] - 13);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
