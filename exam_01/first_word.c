/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 22:32:24 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/25 22:38:53 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		while (av[1][i] != ' ' && av[1][i] > 32 && av[1][i] != '\0')
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
