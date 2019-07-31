/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:29:41 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/25 21:40:40 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		time(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 1);
	else if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 1);
	else
		return (1);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			j = 0;
			while (j < time(av[1][i]))
				{
					ft_putchar(av[1][i]);
					j++;
				}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
