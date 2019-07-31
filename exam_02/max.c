/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:45:18 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/26 12:58:01 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int i;
	int max;

	if (len <= 0)
		return (0);
	i = 0;
	max = tab[0];
	while (i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

void	main()
{
	int a[6] = {23, 556766, 23, 56, 1111, 222};
	printf("%d\n", max(a, 6));
}
