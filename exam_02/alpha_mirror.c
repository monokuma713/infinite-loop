/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:31:58 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/26 12:43:56 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	convert(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return ('z' - c + 'a');
	else if (c >= 'A' && c <= 'Z')
		return ('Z' - c + 'A');
	else
		return (c);
}

int 	main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
			ft_putchar(convert(av[1][i++]));
	}
	ft_putchar('\n');
	return (0);
}

