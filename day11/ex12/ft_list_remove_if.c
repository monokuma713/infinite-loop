/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:02:54 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/24 22:10:41 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*pre;
	t_list	*cur;
	t_list	*nex;

	cur = beigin_list;
	while (cur)
	{
		if ((*cmp)(cur->data, data_ref) == 0)
		{
			nex = cur->next;
#include "ft_list.h"

			void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
			{
				t_list	*pre;
				t_list	*cur;
				t_list	*nex;

				cur = beigin_list;
				while (cur)
				{
					if ((*cmp)(cur->data, data_ref) == 0)
					{
						nex = cur->next;
#include "ft_list.h"

						void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
						{
							t_list	*pre;
							t_list	*cur;
							t_list	*nex;

							cur = beigin_list;
							while (cur)
							{
								if ((*cmp)(cur->data, data_ref) == 0)
								{
									nex = cur->next;

