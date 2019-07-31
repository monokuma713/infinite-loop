/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhou <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:02:21 by mzhou             #+#    #+#             */
/*   Updated: 2019/07/31 11:29:03 by mzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	int sign;
	int r;

	r = 0;
	sign = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-')
	{
		s++;
		sign = -1;
	}
	if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return (r * sign);
}

void	ft_puthex(int n)
{
	/*
	 * char *str;

	str = "0123456789abcdef";
	if (a == 0)
		write(1, "0", 1);
	while (a != 0)
	{
		write (1, &str[a % 16], 1);
		a = a / 16;
	}
	*/
	char c;
	if (n >= 16)
		ft_puthex(n / 16);
	n = n % 16;
//	n += ((n < 10) ? '0' : 'a' - 10);
	if (n < 10)
		c = n + '0';
	else
		c = n + 'a' - 10;
	write (1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_puthex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
