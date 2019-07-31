/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:22:03 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 22:32:27 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*count;
	int		i;

	i = 0;
	if (!begin_list)
		return (0);
	count = begin_list;
	while (count)
	{
		count = count->next;
		i++;
	}
	return (i);
}
