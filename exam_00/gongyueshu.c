/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gongyueshu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 20:25:00 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/25 20:31:28 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main()
{
	int a = 42;
	int b = 49;

	while (a != b)
	{
		if (a > b)
			a = a -b;
		if (a < b)
			b = b -a;
	}
	printf("%d\n", a);
	return (0);
}