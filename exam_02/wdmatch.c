/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:59:30 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 14:14:34 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int i;
	int len;

	len = 0;
	while (s1[len] != 0)
		len++;
	i = 0;
	while (*s2 && i < len)
	   (*s2++ == s1[i]) ? i++ : 0;	
	if (i == len)
		write(1, s1, len);
}


int		main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
