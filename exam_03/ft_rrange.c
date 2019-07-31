/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:43:05 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 10:53:19 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *result;
	int i;

	i = 0;
	if (end > start)
	{
		result = (int *)malloc (sizeof(int) * (end - start + 1));
		while (i < end - start)
		{
			result[i] = end - i;
			i++;
		}
	}
	else if (end < start)
	{
		result = (int *)malloc (sizeof(int) * (-end + start + 1));
		while (i < start - end)
		{
			result[i] = end + i;
			i++;
		}
	}
	else
	{
		result = (int *)malloc (sizeof(int));
		result[0] = end;
		result[1] = '\0';
	}
	return (result);
}
