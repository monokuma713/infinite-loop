/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_i_may_need.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 13:11:37 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/29 09:45:53 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		ft_atoi(char **str)
{
	int n;

	n = 0;
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + **str - '0';
		(*str)++;
	}
	return (n);
}

char	*space_must_die(char *str)
{
	int		i;
	int		j;
	char	*clean_str;

	i = 0;
	j = 0;
	clean_str = malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			clean_str[j] = str[i];
			j++;
		}
		i++;
	}
	clean_str[j] = '\0';
	return (clean_str);
}
