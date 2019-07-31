/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serach_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:44:29 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/25 21:51:57 by mzhou            ###   ########.fr       */
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

	if (ac == 4 && av[2][1] == '\0' && av[3][1] =='\0')
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				ft_putchar(av[3][0]);
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
