/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 13:46:46 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 22:23:21 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *last;

	while (begin_list)
	{
		if (begin_list->next == NULL)
		{
			last = begin_list;
			return (last);
		}
		begin_list = begin_list->next;
	}
	return (0);
}
