/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:03:26 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 22:44:40 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_data;

	if (begin_list && *begin_list)
	{
		last_data = *begin_list;
		while (last_data->next)
			last_data = last_data->next;
		last_data->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
