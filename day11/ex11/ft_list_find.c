/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:56:51 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 22:51:37 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*mr_right;

	mr_right = begin_list;
	while (mr_right)
	{
		if ((*cmp)(mr_right->data, data_ref) == 0)
			return (mr_right);
		mr_right = mr_right->next;
	}
	return (0);
}
