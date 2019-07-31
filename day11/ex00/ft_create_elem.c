/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:52:26 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 12:39:55 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *new_data;

	if (!(new_data = malloc(sizeof(t_list))))
		return (NULL);
	new_data->data = data;
	new_data->next = NULL;
	return (new_data);
}
