/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restr_capitalizer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:10:43 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 12:45:04 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		space(char a)
{
	if (a == ' ' || a == '\t')
		return (1);
	else
		return (0);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
}

int		main(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int flag;

	if (ac >= 2)
	{
		j = 1;
		flag = 0;
		while (j <= ac)
		{	
			flag = 0;
			i = ft_strlen(av[j]);
			while (i >= 0)
			{
				if (space(av[j][i]) == 1)
				{
					flag = 1;
					str[i] = av[j][i];
				}
				else
				{
					if (flag == 1)
					{
						if (av[j][i] >= 'a' && av[j][i] <= 'z')
							str[i] = av[j][i] - 32;
						else
							str[i] = av[j][i];
						flag = 0;
					}
					else
					{
						if (av[j][i] >= 'A' && av[j][i] <= 'Z')
							str[i] = av[j][i] + 32;
						else
							str[i] = av[j][i];
					}
				}
				i--;
			}
			ft_putstr(str);
			write(1, "\n", 1);
			j++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

