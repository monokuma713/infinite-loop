/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 12:42:11 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 22:45:15 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first_data;

	if (*begin_list)
	{
		first_data = ft_create_elem(data);
		first_data->next = *begin_list;
		*begin_list = first_data;
	}
	else
		*begin_list = ft_create_elem(data);
}
